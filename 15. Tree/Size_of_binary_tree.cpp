#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node (int k)
    {
        key = k;
        left = right = NULL;
    }
};


int printSize(Node *root)
{
    if(root==NULL)  return 0;
    else
        return  1 + printSize(root->left) + printSize(root->right);
}


// Time complexity = O(n)
// Auxiliary Space = O(h)


//  Can be done in iterative manner using level order traversal
//  Time Complexity = O(n)
//  Auxiliary space = O(w)  

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->left = new Node(70);

    cout<<printSize(root);

    return 0;
}