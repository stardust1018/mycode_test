#include <iostream>
#include <thread>
#include <chrono>

void hello(int id) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Hello from thread " << id << std::endl;
}

int main() {
    std::thread t1(hello, 1);
    std::thread t2(hello, 2);

    t1.join(); // 等待线程结束
    t2.join();

    std::cout << "Main thread done." << std::endl;
    return 0;
}