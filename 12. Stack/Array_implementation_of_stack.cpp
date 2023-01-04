#include<bits/stdc++.h>
using namespace std;

struct MyStack
{
    int *arr;
    int top;
    int cap;
    MyStack(int c) {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if(top==cap-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        int ans = arr[top];
        top--;
        return ans;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return arr[top];
    }

    int size()
    {
        return (top+1);
    }
    
    bool isEmpty()
    {
        return top==-1;
    }

};


int main()
{
    MyStack s(3);
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