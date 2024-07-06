#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

atomic<int> counter(0); // Atomic integer

void task()
{
    for (int i = 0; i < 100000; i++)
    {
        counter++; // Atomic increment operation
    }
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
