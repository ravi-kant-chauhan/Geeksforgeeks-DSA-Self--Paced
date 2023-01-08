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

// My Solution

void leftView(Node *root)
{
    if(root==NULL) return;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    cout<<q.front()->key<<" ";
    while(q.size()>1)
    {
        Node *curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<(q.front()->key)<<" ";
            q.push(NULL);
            continue;
        }
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
}




//         *******      Learnt Approach      ******

void leftView(Node *root)
{
    if(root==NULL) return;
    queue<Node *>q;
    q.push(root);
    while(q.empty() == false)
    {
        int count = q.size();
        for(int i = 0; i<count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if(i==0){
                cout<<(curr->key)<<" ";
            }
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
}

*/

int maxlevel = 0;
void printleft(Node *root, int level)
{
    if(root==NULL)  return;

    if(maxlevel< level){
        cout<< root->key<<" ";
        // maxlevel++;
        maxlevel = level;
    }
    printleft(root->left, level+1);
    printleft(root->right, level+1);
}
void leftView(Node *root)
{
    printleft(root, 1);
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


    leftView(root);
    
    return 0;
}