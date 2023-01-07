#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node (int k)
    {
        key = k;
        left = right = NULL;
    }
};

void printPostorder(Node *root)
{
    if(root!=NULL)
    {
        printPostorder(root->left);
        printPostorder(root->right);
        cout<<(root->key)<<" ";
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    printPostorder(root);
    return 0;
}