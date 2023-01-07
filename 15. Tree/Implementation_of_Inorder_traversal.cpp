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

void printInorder(Node *root)
{
    if(root!=NULL)
    {
        printInorder(root->left);
        cout<<(root->key)<<" ";
        printInorder(root->right);
    }
}


//  Time complexity = O(n)
// Auxiliary space = O(h)    -> height of the tree


int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);  

    printInorder(root);
    return 0;
}