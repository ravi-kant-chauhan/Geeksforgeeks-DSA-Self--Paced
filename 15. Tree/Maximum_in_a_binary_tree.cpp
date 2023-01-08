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



/*          Iterative Solution

int maxElement(Node* root)
{
    if(root==NULL) return INT_MIN;
    queue<Node *>q;
    q.push(root);
    int ans = root->key;
    while(q.empty()==false)
    {
        Node *curr = q.front();
        q.pop();
        ans = max(curr->key, ans);
        if(curr->left!=NULL)   q.push(curr->left);
        if(curr->right!=NULL)   q.push(curr->right);
    }
    return ans;
}

// Time complexity = O(n)
// Auxiliary space = O(w)

*/




//      Recursive Solution

int maxElement(Node *root)
{
    if(root==NULL)  return INT_MIN;

    return max(root->key, max(maxElement(root->left), maxElement(root->right)));
}

// Time complexity = O(n)
// Auxiliary space = O(h)

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(550);
    root->right->right = new Node(60);
    root->right->left = new Node(70);


    cout<<maxElement(root);

    return 0;
}