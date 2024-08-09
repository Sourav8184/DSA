#include <iostream>
using namespace std;

/*
2. abstraction:
    Data abstraction is one of the most essential and important features of
    object-oriented programming in C++. Abstraction means displaying only
    essential information and ignoring the details. Data abstraction refers
    to providing only essential information about the data to the outside world,
    ignoring unnecessary details or implementation.
*/

class Car
{
public:
    void startEngine()
    {
        cout << "Engine started." << endl;
    }

    void accelerate()
    {
        cout << "Car is accelerating." << endl;
    }

    void brake()
    {
        cout << "Car is braking." << endl;
    }
};

int main()
{
    Car myCar;
    myCar.startEngine();
    myCar.accelerate();
    myCar.brake();

    return 0;
}

/*
Explanation:
    The Car class provides an abstraction of a car's functionality without
    showing the internal details of how the engine starts, how acceleration
    works, or how the brake system is implemented.
    The user interacts with the car at a high level through simple methods
    like startEngine, accelerate, and brake.
*/