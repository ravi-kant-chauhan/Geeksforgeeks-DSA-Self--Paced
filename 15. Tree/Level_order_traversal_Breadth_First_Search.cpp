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


/*

int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
        return max(height(root->left), height(root->right))+1;
}

void printNodes(Node *root, int x)
{
    if(root == NULL) return;
    if(x==0){
        cout<<root->key<<" ";
    }
    else {
        printNodes(root->left, x-1);
        printNodes(root->right, x-1);
    }
}

void printBFS(Node *root)
{
    int h = height(root);
    for(int i = 0; i<h; i++){
        printNodes(root, i);
    }
}

// Time complexity = O(n*h)

*/

void printBFS(Node *root)
{
    if(root == NULL)    return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}
//Time complexity = Theta(n)
//Auxiliary Space = O(n)   -> theta(w)    w -> width (1-n)

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->left = new Node(70);


    printBFS(root);

    return 0;
}