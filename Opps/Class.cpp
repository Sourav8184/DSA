#include <iostream>
using namespace std;
class student
{
private:
    int rollNo;
    string name;

public:
    void setNameAndRollNo(int r, string n)
    {
        rollNo = r;
        name = n;
    }
    int getRollNo()
    {
        return rollNo;
    }
    string getName()
    {
        return name;
    }
};

class C1
{
};

class C2
{
    char c;
};

class C3
{
    char c;
    int a;
};

class C4
{
    char c;
    char b;
    int a;
};

class C5
{
    char c;
    int a;
    char b;
};
class C6
{
    int a;
    char c;
    char b;
};
int main()
{
    student s1;
    s1.setNameAndRollNo(1, "abc");
    cout << s1.getRollNo() << " " << s1.getName() << endl;
    student s2;
    s2.setNameAndRollNo(2, "def");
    cout << s2.getRollNo() << " " << s2.getName() << endl;
    cout << sizeof(C1) << endl;
    cout << sizeof(C2) << endl;
    cout << sizeof(C3) << endl;
    cout << sizeof(C4) << endl;
    cout << sizeof(C5) << endl;
    cout << sizeof(C6) << endl; // best
    return 0;
}