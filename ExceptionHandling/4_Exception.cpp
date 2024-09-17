#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int b = 0;
    // int r = a / b;
    // cout << r << endl;
    // cout << "Code..." << endl;

    int a = 10;
    // int b = 0;
    int b = 2;
    int r = 0;

    try
    {
        if (b == 0)
            throw "denominator not equal to 0 ";
        r = a / b;
        cout << r << endl;
    }
    catch (const char *e)
    {
        cout << "Exception: " << e << endl;
    }

    cout << "Code..." << endl;
    return 0;
}