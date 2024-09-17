#include <iostream>
using namespace std;

int main()
{
    // Dynamic memory allocation for a single integer
    int *num = new int;
    *num = 42;
    cout << "Value of num: " << *num << endl;

    // Dynamic memory allocation for an array
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 2;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Freeing the allocated memory
    delete num;   // Free single int memory
    delete[] arr; // Free array memory

    return 0;
}
