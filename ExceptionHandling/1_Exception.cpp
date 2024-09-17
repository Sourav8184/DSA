#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance;
    int acc_no;

public:
    Customer(string n, int b, int a)
    {
        name = n;
        balance = b;
        acc_no = a;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " rs. credited in your account & acc_no is: " << acc_no << "Total balance is: " << balance << endl;
        }
        else
        {
            cout << "amount should be greater then 0" << endl;
        }
    }

    void withdraw(int amount)
    {
        if (balance > 0 && amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << amount << " rs. debited in your account & acc_no is: " << acc_no << "Total balance is: " << balance << endl;
        }
        else if (amount < 0)
        {
            cout << "amount should be greater then 0" << endl;
        }
        else
        {
            cout << "Your balance is low" << endl;
        }
    }
};

int main()
{
    Customer c1("Hello", 5000, 52212209);
    c1.deposit(-1000);
    c1.deposit(1000);
    c1.withdraw(-1000);
    c1.withdraw(100000);
    c1.withdraw(100);
    return 0;
}