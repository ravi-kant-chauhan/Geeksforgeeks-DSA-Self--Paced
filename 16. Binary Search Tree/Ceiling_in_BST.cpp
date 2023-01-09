#include<bits/stdc++.h>
using namespace std;

//  Ceiling ->  Value or smallest value greater than the given value



struct Node {
    int key;
    Node *left, *right;
    Node (int k)
    {
        key = k;
        left = right = NULL;
    }
};


Node *CeilBST(Node *root, int x) 
{
    Node *res = NULL;
    while(root!=NULL) {
        if(root->key == x)
            return root;
        else if(root->key<x)
            root =  root->right;
        else{
            res = root;
            root = root->left;
        }
    }
    return res;
}


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


    cout<<CeilBST(root, x)->key;

    return 0;
}