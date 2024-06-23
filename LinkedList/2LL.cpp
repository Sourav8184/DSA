#include <iostream>
using namespace std;

/* ------------------------------------------------ */

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

/* ------------------------------------------------ */

int findLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

/* ------------------------------------------------ */

bool isPresent(int data, Node *head)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == data)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

/* ------------------------------------------------ */

void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/* ------------------------------------------------ */

Node *insertAt_First(int data, Node *head)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }

    return head;
}

/* ------------------------------------------------ */

Node *insertAt_Last(int data, Node *head)
{
    // return new Node(data, head); this is also work:
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

/* ------------------------------------------------ */

Node *insertKth_Element(int data, Node *head, int k)
{
    Node *newNode = new Node(data);
    if (k <= 1)
    {
        return insertAt_First(data, head);
    }
    else if (k > findLength(head))
    {
        return insertAt_Last(data, head);
    }
    else
    {
        Node *temp = head;
        while (k - 2 > 0)
        {
            temp = temp->next;
            k--;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

/* ------------------------------------------------ */

Node *insertAt_Mid(int data, Node *head)
{
    int l = findLength(head);
    if (l % 2 == 0)
    {
        // even length:
        return insertKth_Element(data, head, (l / 2) + 1);
    }
    else
    {
        // odd length:
        return insertKth_Element(data, head, (l / 2) + 1);
    }
}

/* ------------------------------------------------ */

Node *insertAfterK(Node *head, int k, int data)
{

    Node *newNode = new Node(data);
    Node *temp = head;
    while (temp->data != k)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

/* ------------------------------------------------ */

Node *insertBeforeK(Node *head, int k, int data)
{
    Node *newNode = new Node(data);
    if (head->data == k)
    {
        return insertAt_First(data, head);
    }
    else
    {
        Node *temp = head;
        while (temp->next->data != k)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

/* ------------------------------------------------------------------------- */

Node *deleteAt_First(Node *head)
{
    Node *temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
    return head;
}

/* ------------------------------------------------ */

Node *deleteAt_Last(Node *head)
{
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    Node *d = temp->next;
    temp->next = NULL;
    delete d;
    return head;
}

/* ------------------------------------------------ */

Node *deleteKth_Element(Node *head, int k)
{
    if (k <= 1)
    {
        return deleteAt_First(head);
    }
    else if (k >= findLength(head))
    {
        return deleteAt_Last(head);
    }
    else
    {
        Node *temp = head;
        while (k - 2 > 0)
        {
            temp = temp->next;
            k--;
        }
        Node *d = temp->next;
        temp->next = d->next;
        delete d;
    }
    return head;
}

/* ------------------------------------------------ */

Node *deleteK(Node *head, int k)
{
    if (head->data == k)
    {
        return deleteAt_First(head);
    }
    else
    {
        Node *temp = head;
        while (temp->next->data != k)
        {
            temp = temp->next;
        }
        Node *d = temp->next;
        temp->next = d->next;
        delete d;
    }
    return head;
}

/* ------------------------------------------------ */

Node *deleteBeforeK(Node *head, int k)
{
    if (head->data == k)
    {
        return deleteAt_First(head);
    }
    else
    {
        Node *temp = head;
        while (temp->next->next->data != k)
        {
            temp = temp->next;
        }
        Node *d = temp->next;
        temp->next = d->next;
        delete d;
    }
    return head;
}

/* ------------------------------------------------ */

Node *deleteAfterK(Node *head, int k)
{
    if (head->data == k)
    {
        return deleteKth_Element(head, 2);
    }
    else
    {
        Node *temp = head;
        while (temp->data != k)
        {
            temp = temp->next;
        }
        if (temp->next != NULL)
        {
            Node *d = temp->next;
            temp->next = d->next;
            delete d;
        }
        else
        {
            return deleteAt_Last(head);
        }
    }
    return head;
}
/* ------------------------------------------------ */

int main()
{
    Node *head = NULL;
    head = insertAt_First(1, head);
    head = insertAt_First(2, head);
    head = insertAt_First(3, head);
    head = insertAt_Last(4, head);
    head = insertAt_Last(5, head);
    head = insertAt_Last(6, head);
    head = insertKth_Element(7, head, 1);
    head = insertKth_Element(8, head, 2);
    head = insertKth_Element(9, head, 8);
    head = insertKth_Element(10, head, 10);
    head = insertAt_Mid(100, head);
    head = insertAt_Mid(200, head);
    head = insertAfterK(head, 7, 1000);
    head = insertBeforeK(head, 7, 1000);
    cout
        << endl
        << "After Insert Operations " << endl
        << endl;

    PrintLL(head);

    head = deleteAt_First(head);
    head = deleteAt_Last(head);
    head = deleteKth_Element(head, 5);
    head = deleteKth_Element(head, 2);
    head = deleteKth_Element(head, 7);
    head = deleteK(head, 8);
    head = deleteK(head, 6);
    head = deleteK(head, 7);
    head = deleteAfterK(head, 3);
    head = deleteAfterK(head, 9);
    head = deleteBeforeK(head, 3);
    head = deleteBeforeK(head, 5);
    cout
        << endl
        << "After delete Operations " << endl
        << endl;

    PrintLL(head);

    return 0;
}