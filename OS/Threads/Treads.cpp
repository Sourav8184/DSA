#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

void taskA()
{
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        cout << "TaskA: " << i << endl;
        fflush(stdout);
    }
}

void taskB()
{
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        cout << "TaskB: " << i << endl;
        fflush(stdout);
    }
}

int main()
{
    thread t1(taskA);
    thread t2(taskB);

    t1.join(); // Main thread wait when t1 is not complete
    t2.join(); // Main thread wait when t2 is not complete

    return 0;
}