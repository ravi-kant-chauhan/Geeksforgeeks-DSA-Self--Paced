#include<bits/stdc++.h>
using namespace std;

// Floor ->  Value or largerst value smaller than the given value

struct Node {
    int key;
    Node *left, *right;
    Node (int k)
    {
        key = k;
        left = right = NULL;
    }
};


Node *floorBST(Node *root, int x) 
{
    Node *res = NULL;
    while(root!=NULL) {
        if(root->key == x)
            return root;
        else if(root->key > x)
        {
            // res = root;
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
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


    cout<<floorBST(root, x)->key;

    return 0;
}