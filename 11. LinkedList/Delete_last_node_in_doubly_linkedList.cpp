#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node (int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


void print(Node *head) {
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node *deleteLast(Node *head){
    if(head==NULL)  return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;

    return head;
}

// Time complexity = Theta(n)
// with tail pointer theta(1)


int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp1->prev = head;
    temp2->prev = temp1;

    print(head);

    head = deleteLast(head);  

    cout<<endl;
    print(head);

    return 0;
}