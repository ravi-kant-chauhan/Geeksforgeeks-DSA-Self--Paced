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

Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
    }
    else {
        Node *curr = head->next;
        while(curr->next!=head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

Time complexity = O(n)
*/


/*      Efficient Approach


//  Tail Approach

Node *insertHead(Node *tail, int x)
{
    Node *temp = new Node(x);
    if(tail==NULL){
        temp->next = temp;
    }
    else{
        temp->next = tail->next;
        tail->next = temp;
    }
    return temp;
}



Time complexity = O(1)
*/


// 1. Inserting Temp after head
// 2. Swapping Temp & Head values

Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;

        temp->data = head->data;
        head->data = x;
    }
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

    int x;
    cin>>x;

    printList(head);
    cout<<endl;

    //  head = insertHead(tail, x);      //  For tail approach

    head = insertHead(head, x);
    
    printList(head);
    
    return 0;
}