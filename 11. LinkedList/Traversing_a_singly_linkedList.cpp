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

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printlist(head);
    return 0;
}



/*


void printlist(Node *head) {
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);

    printlist(head);                        // Main head pointer is not changed
                                            // Its the printlist head pointer that is changed to null in this case
    printlist(head);

    return 0;
}


*/
