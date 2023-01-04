#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node (int x)
    {
        data = x;
        next = prev = NULL;
    }
};


void printList(Node *head)
{
    if(head==NULL)  return;
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
}


/*          Delete Begin

Node *DeleteBegin(Node *head)
{
    if(head==NULL)  return NULL;
    if(head->next == head) {
        delete head;
        return NULL;
    }
    Node *temp = head->next;
    head->prev->next = temp;
    temp->prev = head->prev;
    delete head;

    return temp;
}

*/

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL) {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }  
    head->prev->next = temp;
    temp->next = head;
    temp->prev = head->prev;
    head->prev = temp;

    return temp;
}



int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = head;
    temp3->prev = temp2;
    temp2->prev = temp1;
    temp1->prev = head;
    head->prev = temp3;

    int x;
    cin>>x;

    printList(head);
    cout<<endl;

    head = insertBegin(head, x);

    printList(head);
    return 0;
}