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

void printBFSLbyL(Node *root)
{
    int h = height(root);
    for(int i = 0; i<h; i++){
        printNodes(root, i);
        cout<<endl;
    }
}

O(n*h)

*/

void printBFSLbyL(Node *root)
{
    if(root == NULL) return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        Node *curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL)    q.push(curr->left);
        if(curr->right!=NULL)   q.push(curr->right);
    }
}

// Time complexity = O(n+h)-> O(n)
// Auxiliary Space = Theta(w)  ; w = (1-n)


int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->left = new Node(70);


    printBFSLbyL(root);

    return 0;
}