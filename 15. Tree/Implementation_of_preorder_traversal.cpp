#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};


void printPreorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        printPreorder(root->left);
        printPreorder(root->right);
    }
}
//  Time complexity = O(n)
// Auxiliary space = O(h)    -> height of the tree

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    printPreorder(root);

    return 0;
}