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

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else {
        Node *curr = head;
        while(curr->next!=head){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
    return head;
}


Time complexity = O(n)

*/


/*      Efficient Approach


// 1.  Using Tail pointer



// 2. Swapping


Time complexity = O(1)
*/

Node *insertEnd(Node *head, int x)
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

        return temp;
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

    int x;
    cin>>x;

    printList(head);
    cout<<endl;

    head = insertEnd(head, x);
    
    printList(head);
    
    return 0;
}