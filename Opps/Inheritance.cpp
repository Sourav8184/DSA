#include <iostream>
using namespace std;

/*
3. Inheritance
    Inheritance is a mechanism where a new class (derived class) inherits
    properties and behaviors (methods) from an existing class (base class).
    This promotes code reusability and establishes a relationship between
    different classes.
 */

class Animal
{
public:
    void eat()
    {
        cout << "This animal is eating." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "The dog is barking." << endl;
    }
};

int main()
{
    Dog myDog;
    myDog.eat(); // Inherited from Animal class
    myDog.bark();

    return 0;
}

/*
Explanation:
    The Dog class inherits the eat method from the Animal class. This allows the
    Dog class to reuse the functionality of the Animal class while adding its own
    unique method bark.
    Inheritance helps in organizing code in a hierarchical manner, making it
    more manageable.
*/