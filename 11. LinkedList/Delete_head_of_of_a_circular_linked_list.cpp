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


/*      Naive Approach

Node *deleteEnd(Node *head)
{
    if(head==NULL)  return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }

    Node *curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;

    return curr->next;
    
}


Time Complexity = O(n)
*/


/*      Efficient Approach

//  Coping the second node to first node



Time Complexity = O(1)
*/

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



int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    Node *tail = new Node(40);
    head->next->next->next = tail;
    tail->next = head;

    
    printList(head);
    cout<<endl;

    head = deleteHead(head);
    
    printList(head);
    
    return 0;
}