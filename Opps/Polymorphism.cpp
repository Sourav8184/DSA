#include <iostream>
using namespace std;

/*
4.Polymorphism
    Polymorphism in programming is a concept that allows a single function or
    method to work in different ways based on the input it receives. It means
    "many forms" and lets you use the same operation or function name for
    different types of data.

    There are two main types of polymorphism in C++:

        Compile-time Polymorphism (Static Polymorphism)

        Function Overloading
        Operator Overloading
        Run-time Polymorphism (Dynamic Polymorphism)

        Virtual Functions
        1. Compile-time Polymorphism (Static Polymorphism)
        Compile-time polymorphism is resolved during the compilation
        process. The most common examples of compile-time polymorphism
        are function overloading and operator overloading.

        a) Function Overloading
        Function overloading allows multiple functions to have the same
        name but different parameter lists. The compiler determines which
        function to call based on the arguments provided.
*/

class Print
{
public:
    void display(int i)
    {
        cout << "Integer: " << i << endl;
    }

    void display(double f)
    {
        cout << "Float: " << f << endl;
    }

    void display(string s)
    {
        cout << "String: " << s << endl;
    }
};

int main()
{
    Print p;
    p.display(5);       // Calls display(int)
    p.display(3.14);    // Calls display(double)
    p.display("Hello"); // Calls display(string)

    return 0;
}

/*
Explanation:
    The display method is overloaded to accept different types of parameters
    (int, double, and string).
    The appropriate method is selected by the compiler based on the type of
    argument passed.
*/
