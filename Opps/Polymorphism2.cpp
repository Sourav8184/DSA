#include <iostream>
using namespace std;

/*
b) Operator Overloading
    Operator overloading allows existing C++ operators to be redefined and
    used in different ways depending on the operands provided.
*/

class Complex
{
private:
    int real;
    int comp;

public:
    void input(int r, int i)
    {
        real = r;
        comp = i;
    }

    Complex addComplex(Complex c)
    {
        c.real = real + c.real;
        c.comp = comp + c.comp;
        return c;
    }

    void display()
    {
        cout << real << " + " << comp << " i " << endl;
    }

    void display(Complex c)
    {
        cout << real << " + " << comp << " i " << endl;
        cout << c.real << " + " << c.comp << " i " << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.input(6, 4);
    c2.input(3, 5);
    c1.display(c2);
    c1.display();
    c2.display();
    c3 = c1.addComplex(c2);
    c3.display();
    return 0;
}

/*
Explanation:
    The + operator is overloaded for the Complex class to add two complex numbers.
    The operator+ method is defined to add the real and imaginary parts of the
    complex numbers and return a new Complex object.
*/