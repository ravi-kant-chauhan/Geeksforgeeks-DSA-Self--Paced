#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right;
    Node *left;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

/*              My solution

Approach

    1. Check for nodes whose left and right nodes and empty.

        Incomplete


int findWidth(Node *root, int x)
{
    if(root==NULL) return 0;

    if(root->left == NULL && root->right==Node){
        x++;
        return x;
    }
    return ()
}

int maxWidth(Node *root)
{
    findWidth(root, 0);
}

*/


int maxWidth(Node *root)
{
    if(root==NULL) return 0;
    queue<Node *>q;
    q.push(root);
    int ans = 0;
    while(q.empty()==false)
    {
        int count = q.size();
        ans = max(count, ans);
        for(int i=0; i<count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
    return ans;
}





int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    // root->right->left = new Node(60);
    // root->right->right = new Node(70);

    cout<<maxWidth(root);
    return 0;
}