#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // Pointer
    Node *head = new Node(10);
    cout << head->data << endl;
    // Object
    Node obj = Node(20);
    cout << obj.data << endl;
    return 0;
}