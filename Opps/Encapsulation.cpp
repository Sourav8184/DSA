#include <iostream>
using namespace std;

/* 1. Encapsulation
      Encapsulation is the bundling of data(attributes) and
      methods(functions) that operate on the data into a single unit,
      known as a class.
*/

class Student
{
private:
    string name;
    int rollNo;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    string getName()
    {
        return this->name;
    }
    int getRollNo()
    {
        return this->rollNo;
    }
    void printAllData()
    {
        cout << "Name: " << this->name << " , " << "RollNo: " << this->rollNo << endl;
    }
};

int main()
{
    Student student1;
    student1.setName("Sourav");
    student1.setRollNo(1);
    cout << "Name: " << student1.getName() << endl;
    cout << "Name: " << student1.getRollNo() << endl;
    student1.printAllData();
    return 0;
}

/*
Explanation :
    Here,
    the Student class encapsulates the data(name and age) and the
    methods(setName, setRollno, and printAllData) into a single unit.The data
    members are private,
    meaning they cannot be accessed directly from outside the class.
    They can only be accessed or modified using the public methods.
*/