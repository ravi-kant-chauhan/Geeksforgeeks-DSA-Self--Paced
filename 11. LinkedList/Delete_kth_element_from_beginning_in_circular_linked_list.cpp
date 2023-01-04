#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next = NULL;
    }
};


void printList(Node *head)
{
    if(head==NULL)  return;
    
    Node *p = head;
    do
    {
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=head);
    
}


Node *deleteHead(Node *head)
{
    if(head==NULL)  return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node *curr = head->next;
    head->next = curr->next;

    head->data = curr->data;
    delete curr;
    
    return head;
}

Node *deleteKth(Node *head, int n)
{
    if(head==NULL)  return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
    Node* temp = head;
    if(n==1){
        return deleteHead(head);
    }
    else{
        int count = 1;
        while(count+1!=n && temp->next->next!=head) {
            temp = temp->next;
            count++;
        }
        Node* t = temp->next;
        temp->next = temp->next->next;
        delete t;
        return head;
    }
}


int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    Node *tail = new Node(40);
    head->next->next->next = tail;
    tail->next = head;

    int n;
    cin>>n;
    
    printList(head);
    cout<<endl;

    head = deleteKth(head, n);
    
    printList(head);
    
    return 0;
}