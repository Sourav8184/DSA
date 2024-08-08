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

// Function for in-order traversal of the BST
void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

// Function for in-order traversal of the BST
void postorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    cout << root->data << " ";
}

// Function for Find minimum value of the BST
int minValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

// Function for Find maximum value of the BST
int maxValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

int searchValue(Node *root, int value)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->data == value)
    {
        return root->data;
    }

    if (root->data < value)
    {
        return searchValue(root->right, value);
    }
    else
    {
        return searchValue(root->left, value);
    }
    return -1;
}

int main()
{
    Node *root = NULL;
    cout << "Input: " << endl;
    root = takeInput(root);
    cout << "In-order Traversal: ";
    inorderTraversal(root);
    cout << endl;
    cout << "pre-order Traversal: ";
    preorderTraversal(root);
    cout << endl;
    cout << "post-order Traversal: ";
    postorderTraversal(root);
    cout << endl;
    cout << "Min Value" << endl;
    cout << minValue(root);
    cout << endl;
    cout << "Max Value" << endl;
    cout << maxValue(root);
    cout << endl;
    cout << "Value is" << endl;
    cout << searchValue(root, 11);
    cout << endl;

    return 0;
}
