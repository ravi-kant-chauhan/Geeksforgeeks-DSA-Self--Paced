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

Node *deletelast(Node *head) {
    if(head==NULL) {
        return NULL;
    }
    if(head->next == NULL) {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;

    return head;
}

// Time complexity = Theta(n);

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printlist(head);
    head = deletelast(head);
    cout<<endl;
    printlist(head);
    head = deletelast(head);
    cout<<endl;
    printlist(head);
    head = deletelast(head);
    cout<<endl;
    printlist(head);
    head = deletelast(head);
    cout<<endl;
    cout<<"dlkjfl"<<endl;
    printlist(head);

    return 0;
}
