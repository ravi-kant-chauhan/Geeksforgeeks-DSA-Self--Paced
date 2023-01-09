#include<bits/stdc++.h>
using namespace std;


//  Does not work for duplicate values


struct Node {
    int key;
    Node *left, *right;
    Node (int k)
    {
        key = k;
        left = right = NULL;
    }
};


/*   MY SOlution Iterative

Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *curr = root;
    while(root!=NULL)
    {
        if(root->key ==x)
            return root;
        else if(root->key > x)
        {
            if(root->left==NULL) {
                root->left = temp;
                return curr;
            }
            root = root->left;
        }
        else
        {
            if(root->right == NULL) {
                root->right = temp;
                return curr;
            }
            root = root->right;
        }
    }
    return temp;
}
*/

/*

//                    ******   Recursive   *****

Node *insert(Node *root, int x)
{
    if(root==NULL)
        return new Node(x);
    else if (root->key <x)
        root->right = insert(root->right, x);
    else if (root->key > x)
        root->left = insert(root->left, x);
    return root;
}



 Time complexity = O(h)
 Aux Space = O(h)
*/


Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL, *curr = root;
    while(curr!=NULL)
    {
        parent = curr;
        if(curr->key > x)
            curr = curr->left;
        else if(curr->key < x)
            curr = curr->right;
        else
            return root;
    }

    if(parent==NULL)
        return temp;
    if(parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}
// Time complexity = O(h)


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


    insert(root, x);

    printBST(root);

    return 0;
}