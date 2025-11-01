#include <iostream>
#include <thread>
#include <chrono>

void hello(int id) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Hello from thread " << id << std::endl;
}

class ThreadGuard {
    std::thread& t;
public:
    explicit ThreadGuard(std::thread& t_) : t(t_) {}
    ~ThreadGuard() {
        if (t.joinable()) t.join();
    }
    ThreadGuard(const ThreadGuard&) = delete;
    ThreadGuard& operator=(const ThreadGuard&) = delete;
};



int main() {
    // 使用
    {
        std::thread t1(hello, 1);
        ThreadGuard guard1(t1); // 离开作用域自动 join
        std::thread t2(hello, 2);
        ThreadGuard guard2(t2); // 离开作用域自动 join
    }
    std::cout << "Main thread done." << std::endl;
    return 0;
}