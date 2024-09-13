/*
2. Run-time Polymorphism (Dynamic Polymorphism)
    Run-time polymorphism is achieved using inheritance and virtual functions.
    It allows a function to behave differently based on the object that is
    invoking it. This is determined at runtime.

Virtual Functions and Overriding
    A virtual function is a function in a base class that is declared using
    the keyword virtual. It is meant to be overridden in derived classes. When
    a base class pointer refers to a derived class object, the overridden
    function in the derived class is called, even though the pointer is of base
    class type.
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "This animal makes a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    { // Override the base class method
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    { // Override the base class method
        cout << "The cat meows." << endl;
    }
};

int main()
{
    Animal *animalPtr;
    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound(); // Outputs: The dog barks.

    animalPtr = &cat;
    animalPtr->sound(); // Outputs: The cat meows.

    Animal obj;
    Animal *obj2 = new Animal();
    obj.sound();
    obj2->sound();

    return 0;
}

/*
Explanation:
    The sound function is declared as a virtual function in the Animal class and
    overridden in the Dog and Cat classes.
    Even though animalPtr is of type Animal*, it correctly calls the overridden
    methods in Dog and Cat based on the actual object type it points to.
*/