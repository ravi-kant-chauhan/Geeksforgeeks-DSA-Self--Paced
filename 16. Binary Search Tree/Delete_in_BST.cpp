#include<bits/stdc++.h>
using namespace std;

// Needs to be revised

struct Node {
    int key;
    Node *left, *right;
    Node (int k)
    {
        key = k;
        left = right = NULL;
    }
};


Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr = curr->left;
    return curr;
}


Node *DeleteBST(Node *root, int x) 
{
    if(root==NULL)
        return root;
    if(root->key > x)
        root->left = DeleteBST(root->left, x);
    else if(root->key < x)
        root->right = DeleteBST(root->right, x);
    else {
        if(root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = DeleteBST(root->right, succ->key);
        }
    }
    return root;
}


// Time complexity = O(h)
// Aux Space = O(h)


void printBST(Node *root) {
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


int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(80);
    root->right->left->left = new Node(16);

    printBST(root);
    cout<<endl;

    int x;
    cin>>x;


    DeleteBST(root, x);

    printBST(root);

    return 0;
}