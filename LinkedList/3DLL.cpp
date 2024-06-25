#include <iostream>
#include <vector>
using namespace std;

/* ---------------------------------------------------- */

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

/* ---------------------------------------------------- */

void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << " <- " << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

/* ---------------------------------------------------- */

Node *convertArrToDLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i], NULL, temp);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

/* ---------------------------------------------------- */

int main()
{
    Node *head = NULL;
    cout
        << endl
        << "Array -> DLL " << endl
        << endl;
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the " << n << " Array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    head = convertArrToDLL(arr);
    PrintLL(head);

    return 0;
}