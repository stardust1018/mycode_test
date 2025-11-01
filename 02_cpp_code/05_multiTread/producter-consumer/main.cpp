#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <chrono>

std::queue<int> data_queue;
std::mutex mtx;
std::condition_variable cv;
bool finished = false;

void producer(int id) {
    for (int i = 0; i < 10; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
        {
            std::lock_guard<std::mutex> lock(mtx);
            data_queue.push(i);
            std::cout << "Producer " << id << " produced " << i << std::endl;
        }
        cv.notify_one(); // 通知消费者
    }
}

void consumer1(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return !data_queue.empty() || finished; });

        if (data_queue.empty() && finished) break;

        int value = data_queue.front();
        data_queue.pop();
        lock.unlock();

        std::cout << "Consumer " << id << " consumed " << value << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
    }
}

void consumer2(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return !data_queue.empty() || finished; });

        if (data_queue.empty() && finished) break;

        int value = data_queue.front();
        data_queue.pop();
        lock.unlock();

        std::cout << "Consumer " << id << " consumed " << value << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main() {
    std::thread p1(producer, 1);
    std::thread c1(consumer1, 11);
    std::thread c2(consumer2, 22);

    p1.join();
    finished = true;
    cv.notify_all(); // 唤醒消费者退出
    c1.join();
    c2.join();

    return 0;
}