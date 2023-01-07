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


void printNodes(Node *root, int x)
{
    if(root==NULL)  return;
    if(x==0) {
        cout<<root->key<<" ";
    }
    else {
        printNodes(root->left, x-1);
        printNodes(root->right, x-1);
    }
}

//Time complexity = O(n)
//Auxiliary Space = O(h)


int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->left = new Node(70);

    int x;
    cin>>x;

    printNodes(root, x);

    return 0;
}