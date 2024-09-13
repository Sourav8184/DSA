#include <iostream>
using namespace std;
class B
{
private:
    int data;

public:
    B()
    {
        this->data = 10;
    }
    friend int add(B);
};

int add(B x)
{
    x.data += 10;
    return x.data;
}
int main()
{
    B a;
    cout << "add " << add(a) << endl;
    return 0;
}