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

Node *insertElement(Node *head, int n, int x) {
    Node *temp = new Node(x);
    if(n==1) {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    int count = 1;
    while(count+1!=n && curr->next!=NULL){      // for loop till n-2
        curr = curr->next;                //  curr goes till n-1
        count++;
    }
    if(curr==NULL) {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;

    return head;
}



int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int n, x;
    cin>>n>>x;

    printlist(head);
    cout<<endl;
    head = insertElement(head, n, x);
    
    printlist(head);

    return 0;
}
