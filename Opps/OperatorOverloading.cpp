#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
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
    // OPERATOR OVERLOADING:--
    Complex operator+(Complex C)
    {
        C.a = a + C.a;
        C.b = b + C.b;
        return C;
    }
    Complex operator-()
    {
        Complex C;
        C.a = -a;
        C.b = -b;
        return C;
    }
};
int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(10, 20);
    c2.setData(30, 40);
    c1.getData();
    c2.getData();
    c3 = c1 + c2; // c3=c1.operator+(c2);
    c3.getData();
    c4 = -c3;
    c4.getData();
    return 0;
}