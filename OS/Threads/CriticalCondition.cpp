#include <iostream>
#include <thread>
using namespace std;

int counter = 0;
bool lock = false;

void task()
{
    for (int i = 0; i < 100000; i++)
    {
        counter++;
    }
}

int main()
{
    thread t1(task); // Thread 1 and 2 use the same counter
    thread t2(task);
    t1.join();
    t2.join();
    cout << counter << endl;
    /* final counter value is 200000 because 2 thread increment the same counter */
    return 0;
}
