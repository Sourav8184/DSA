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

/* ---------------------------------------------------- */

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

Node *insertAt_First(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        temp->prev = newNode;
        head = newNode;
        head->next = temp;
    }
    return head;
}

/* ---------------------------------------------------- */

Node *insertAt_Last(Node *head, int data)
{
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
        temp->next->prev = temp;
    }
    return head;
}

/* ---------------------------------------------------- */

Node *insertKth_Element(Node *head, int data, int k)
{
    Node *newNode = new Node(data);
    if (k <= 1)
    {
        return insertAt_First(head, data);
    }
    else if (k > findLength(head))
    {
        return insertAt_Last(head, data);
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
        temp->next->prev = temp;
        temp = temp->next;
        temp->next->prev = temp;
    }
    return head;
}

/* ---------------------------------------------------- */

Node *insertAt_Mid(Node *head, int data)
{
    int l = findLength(head);
    if (l % 2 == 0)
    {
        // even length:
        return insertKth_Element(head, data, (l / 2) + 1);
    }
    else
    {
        // odd length:
        return insertKth_Element(head, data, (l / 2) + 1);
    }
}

/* ---------------------------------------------------- */

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
    temp->next->prev = temp;
    temp = temp->next;
    temp->next->prev = temp;

    return head;
}

/* ---------------------------------------------------- */

Node *insertBeforeK(Node *head, int k, int data)
{
    Node *newNode = new Node(data);
    if (head->data == k)
    {
        return insertAt_First(head, data);
    }
    else
    {
        Node *temp = head;
        while (temp->next->data != k)
        {
            temp = temp->next;
            if (!temp->next)
                return head;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        temp->next->prev = temp;
        temp = temp->next;
        temp->next->prev = temp;
    }
    return head;
}

/* ---------------------------------------------------- */

Node *deleteAt_First(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = temp->next;
    temp->next = NULL;
    head->prev = NULL;
    delete temp;
    return head;
}

/* ---------------------------------------------------- */

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

/* ---------------------------------------------------- */

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
        temp->next->prev = temp;
        d->next = d->prev = NULL;
        delete d;
    }
    return head;
}

/* ---------------------------------------------------- */

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
            if (!temp->next)
            {
                return head;
            }
        }
        Node *d = temp->next;
        temp->next = d->next;
        temp->next->prev = temp;
        d->next = d->prev = NULL;
        delete d;
    }
    return head;
}

/* ---------------------------------------------------- */

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
            if (!temp->next)
            {
                return head;
            }
        }
        Node *d = temp->next;
        temp->next = d->next;
        temp->next->prev = temp;
        d->next = d->prev = NULL;
        delete d;
    }
    return head;
}

/* ---------------------------------------------------- */

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
            temp->next->prev = temp;
            d->next = d->prev = NULL;
            delete d;
        }
        else
        {
            return deleteAt_Last(head);
        }
    }
    return head;
}

/* ---------------------------------------------------- */

int main()
{
    Node *head = NULL;
    head = insertAt_First(head, 10);
    head = insertAt_First(head, 20);

    head = insertAt_Last(head, 40);
    head = insertAt_Last(head, 30);

    head = insertKth_Element(head, 1, 1);

    head = insertAt_Mid(head, 100);
    head = insertAt_Mid(head, 200);

    head = insertAfterK(head, 100, 2);

    head = insertBeforeK(head, 30, 3000);

    head = deleteAt_First(head);

    head = deleteAt_Last(head);

    head = deleteKth_Element(head, 4);

    head = deleteK(head, 20000);

    head = deleteBeforeK(head, 20);

    head = deleteAfterK(head, 100);

    PrintLL(head);
    return 0;
}