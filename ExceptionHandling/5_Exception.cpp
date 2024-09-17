#include <iostream>
using namespace std;
int main()
{
    // int *arr = new int[10000000000000000];
    // cout << "Memory allocation is successful" << endl;
    // delete[] arr;

    try
    {
        int *arr = new int[10000000000000000];
        cout << "Memory allocation is successful" << endl;
        delete[] arr;
    }
    catch (const exception &e)
    {
        cout << "Exception occur due to line 11: " << e.what() << '\n';
    }

    return 0;
}