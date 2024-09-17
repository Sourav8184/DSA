#include <iostream>
#include <exception>
using namespace std;

class ZeroNotAllowed : public runtime_error
{

public:
    ZeroNotAllowed(const string &msg) : runtime_error(msg) {};
};

class LessThenZeroNotAllowed : public runtime_error
{
public:
    LessThenZeroNotAllowed(const string &msg) : runtime_error(msg) {};
};

class GraterThenZeroNotAllowed : public runtime_error
{
public:
    GraterThenZeroNotAllowed(const string &msg) : runtime_error(msg) {};
};

void testException(int num)
{
    try
    {
        if (num == 0)
        {
            throw ZeroNotAllowed("Zero not allowed");
        }
        else if (num < 0)
        {
            throw LessThenZeroNotAllowed("Less than zero not allowed");
        }
        else if (num > 10)
        {
            throw GraterThenZeroNotAllowed("Greater than 10 not allowed");
        }
        else
        {
            cout << "Number is: " << num << endl;
        }
    }
    catch (const ZeroNotAllowed &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    catch (const LessThenZeroNotAllowed &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    catch (const GraterThenZeroNotAllowed &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
}
int main()
{
    testException(0);
    testException(15);
    testException(-5);
    testException(5);
    return 0;
}