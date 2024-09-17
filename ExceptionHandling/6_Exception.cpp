#include <iostream>
using namespace std;

void testException(int num)
{
    try
    {
        if (num == 0)
        {
            throw "Zero is not allowed!";
        }
        else if (num < 0)
        {
            throw num;
        }
        else if (num > 10)
        {
            throw out_of_range("Number too large!");
        }
        else
        {
            cout << "Number is valid: " << num << endl;
        }
    }
    catch (const char *e)
    {
        cout << "Exception: " << e << endl;
    }
    catch (int n)
    {
        cout << "Exception: Invalid no" << n << endl;
    }
    catch (const out_of_range &e)
    {
        cout << "Exception: Number out of range" << e.what() << endl;
    }
    catch (...)
    {
        cout << "Exception occur:" << endl;
    }
}

int main()
{
    testException(0);
    testException(-5);
    testException(15);
    testException(5);
    testException(5);

    return 0;
}