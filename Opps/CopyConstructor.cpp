#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    // Constructor overloading
    Complex()
    {
        a = 1;
        b = 0;
    }

    // Constructor overloading
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    // Constructor overloading
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // Copy Constructor
    Complex(Complex &c) // & is important otherwise you well go in the infinite state
    {
        a = c.a;
        b = c.b;
    }

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.getData();
    Complex c4(4, 5);
    c4.getData();
    // using copy:
    Complex c5(10);
    c5.getData();
    // using copy:
    Complex c6 = c1;
    c6.getData();
    // using copy:
    Complex c7;
    c7 = c5;
    c7.getData();
    // using copy:
    Complex c8(c5);
    c8.getData();
    return 0;
}