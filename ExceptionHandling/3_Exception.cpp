#include <iostream>
using namespace std;
/*

Exception handling:

Exception handling is a process of handle the runtime error so the normal
flow of the program is maintained. if we does not handle the exception the
program print the exception error message and terminates the program.

Cpp provide three keyword for exception handling.
1 try , 2 throw , 3 catch

1. try : This block contain code that throw an exception.

2. throw : If exception are occur in the try block then throw keyword throw
the exception in the appropriate catch block.

3. catch : This block handle the exception throw in the try block.

Exception Handling Flow:

If an exception is thrown inside a try block, the program looks for a matching
catch block. If found, control is transferred to the catch block, where the
exception is handled.

If no exception occurs, the catch block is ignored, and the program continues
normally after the try block.

*/
class Customer
{
    string name;
    int balance;
    int acc;

public:
    Customer(string n, int b, int a)
    {
        name = n;
        balance = b;
        acc = a;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
            throw "amount should be greater then 0";

        balance += amount;
        cout << amount << " rs. credited in your account & acc_no is: " << acc << " Total balance is: " << balance << endl;
    }

    void withdraw(int amount)
    {
        if (amount <= 0)
            throw "Amount should be greate then 0";
        else if (amount > balance)
            throw "Your balance is low";

        balance -= amount;
        cout << amount << " rs. debited in your account & acc_no is: " << acc << " Total balance is: " << balance << endl;
    }
};

int main()
{
    Customer c1("Hello", 5000, 52212209);

    try
    {
        c1.deposit(1000);
        c1.withdraw(500);
        c1.deposit(-1000);
        c1.withdraw(100);
    }
    catch (const char *e)
    {
        cout << "Exception: " << e << endl;
    }

    cout << "Code..." << endl;

    return 0;
}