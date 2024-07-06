#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int counter = 0;
mutex mtx; // Mutex object

void task()
{
    mtx.lock(); // Acquire the lock before accessing the counter
    for (int i = 0; i < 100000; i++)
    {
        counter++;
    }
    mtx.unlock(); // Release the lock after accessing the counter
}

int main()
{
    thread t1(task);
    thread t2(task);
    t1.join();
    t2.join();
    cout << counter << endl; // Should print 200000
    return 0;
}
