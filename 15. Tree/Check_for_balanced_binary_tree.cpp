#include<bits/stdc++.h>
using namespace std;

//  Balanced  - difference between left and right subtree less than equal to 1


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


/*              Naive Solution

//  For every node :
            Check left and right height difference

int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
        return max(height(root->left), height(root->right))+1;
}
bool isBal(Node *root)
{
    if(root==NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh)<=1) && isBal(root->left) && isBal(root->right);
}


Time complexity = O(n*n)
*/

int isBal(Node *root)
{
    if(root==NULL) return 0;
    int lh = isBal(root->left);
    if(lh==-1)  return -1;
    int rh = isBal(root->right);
    if(rh==-1)  return -1;
    if(abs(lh-rh)>1)  return -1;
    else
        return max(lh, rh) + 1;
}


int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);


    cout<<isBal(root);
    
    return 0;
}