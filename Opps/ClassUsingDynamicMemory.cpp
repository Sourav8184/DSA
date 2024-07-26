#include <iostream>
using namespace std;
class Student
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

int main()
{
    Student *s1 = new Student();
    s1->setNameAndRollNo(1, "abc");
    cout << s1->getRollNo() << " " << s1->getName() << endl;
    Student *s2 = new Student();
    s2->setNameAndRollNo(2, "def");
    cout << s2->getRollNo() << " " << s2->getName() << endl;
    return 0;
}