#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;

public:
    // constructor overloading
    Student()
    {
        rollNo = 100;
        name = "Name";
    }

    // constructor overloading
    Student(int r, string s)
    {
        rollNo = r;
        name = s;
    }

    // constructor overloading
    Student(string name)
    {
        this->name = name;
    }

    // constructor overloading
    Student(int rollNo)
    {
        this->rollNo = rollNo;
    }

    // // inline Constructor:
    // Student(int r, string s) : rollNo(r), name(s)
    // {
    // }

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
    cout << s1->getRollNo() << " " << s1->getName() << endl;
    Student *s2 = new Student(1, "abc");
    cout << s2->getRollNo() << " " << s2->getName() << endl;
    return 0;
}