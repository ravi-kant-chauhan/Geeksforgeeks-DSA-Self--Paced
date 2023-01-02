#include<bits/stdc++.h>
using namespace std;



struct Node {
    int data;
    Node *next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int searchIterative(Node *head, int x) {
    int count = 1;
    while(head!=NULL) {
        if(head->data==x) {
            return count; 
        } 
        count++;
        head = head->next;
    }
    return -1;
}

int searchRecursive(Node *head, int x) {
    if(head==NULL)  return -1;
    
    if(head->data==x) {
        return 1;
    }
    else {
        int ans = searchRecursive(head->next, x);
        if(ans == -1)   return -1;
        else    return (ans+1);
    }
}

// Time complexity = Theta(n)
// Auxilary Space for recursive = O(n)

// For sorted elements, binary search can be used
// But Binary search in Log(n) cannot be implemented in linked list
// -->  Because middle node can't be found in O(1)

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int x, y;
    cin>>x>>y;

    printlist(head);
    cout<<endl;
    cout<<searchIterative(head, x)<<endl;

    cout<<searchRecursive(head, y)<<endl;

    return 0;
}
