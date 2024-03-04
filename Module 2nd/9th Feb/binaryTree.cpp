#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree
{
private:
    Node *root;

public:
    // Constructor
    BinaryTree()
    {
        root = nullptr;
    }

    void insert(int rootValue, int leftValue, int rightValue)
    {
        if (root == nullptr)
        {
            root = new Node(rootValue);
        }

        if (leftValue != -1)
        {
            root->left = new Node(leftValue);
        }

        if (rightValue != -1)
        {
            root->right = new Node(rightValue);
        }
    }
};

int main()
{
    BinaryTree tree;
    tree.insert(10, 5, 15);
}