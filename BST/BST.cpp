#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert data into the BST
Node *insertData(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = insertData(root->left, data);
    }
    else
    {
        root->right = insertData(root->right, data);
    }
    return root;
}

// Function to take input and build the BST
Node *takeInput(Node *root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertData(root, data);
        cin >> data;
    }
    return root;
}

// Function for in-order traversal of the BST
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    cout << "Input: " << endl;
    root = takeInput(root);

    cout << "In-order Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
