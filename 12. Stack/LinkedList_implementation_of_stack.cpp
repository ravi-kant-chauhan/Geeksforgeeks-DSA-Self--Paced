#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct MyStack
{
    Node* top;
    int sz;
    MyStack()
    {
        sz = 0;
        top = NULL;
    }

    void push(int x)
    {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        sz++;
    }

    int pop()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        int ans = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        sz--;

        return ans;
    }

    int peek()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return top->data;
    }

    int size()
    {
        return sz;
    }
    
    bool isEmpty()
    {
        return top==NULL;
    }
};

int main()
{
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"size: "<<s.size()<<endl;
    cout<<s.peek()<<endl;
    while(s.isEmpty()==false)
    {
        cout<<s.pop()<<" ";
    }
    cout<<endl;
    return 0;
}