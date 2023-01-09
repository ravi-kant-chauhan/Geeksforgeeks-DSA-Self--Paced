#include<bits/stdc++.h>
using namespace std;


struct Node {
    int key;
    Node *left, *right;
    Node (int k)
    {
        key = k;
        left = right = NULL;
    }
};

/*
//  Recursive Search

bool search(Node *root, int x) {
    if(root==NULL) {
        return false;
    }
    else if(root->key == x) {
        return true;
    }
    else if(root->key > x) {
        return search(root->left, x);
    }
    else {
        return search(root->right, x);
    }
}


Time complexity = O(h)
Aux Space = O(h)
*/



// Iterative Search

bool search(Node *root, int x)
{
    while(root!=NULL)
    {
        if(root->key ==x)
            return true;
        else if(root->key < x)
            root = root->right;
        else
            root = root->left;
    }
    return false;
}

// Time complexity = O(h)

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(80);
    root->right->left->left = new Node(16);

    int x;
    cin>>x;

    cout<<search(root, x);

    return 0;
}