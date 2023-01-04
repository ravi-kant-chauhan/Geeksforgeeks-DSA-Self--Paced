#include<bits/stdc++.h>
using namespace std;


/*     Naive Approach 
    
    // Divide the space into two halves


struct TwoStacks
{
    int *arr;
    int top1;
    int top2;
    int cap;
    TwoStacks(int n)
    {
        cap = n;
        arr = new int[n];
        top1 = n/2+1;
        top2 = n/2;
    }

    void push1(int x)
    {
        if (top1 > 0) {
            top1--;
            arr[top1] = x;
        }
        else {
            cout<<"Stack OVerflow by element : "<<x<<endl;
            return;
        }
    }

    void push2(int x){
        if (top2 < cap-1) {
            top2++;
            arr[top2] = x;
        }
        else {
            cout<<"Stack is full by element : "<<x<<endl;
            return;
        }
    }

    int pop1()
    {
        if (top1 <= cap/2)
        {
            int ans = arr[top1];
            top1++;
            return ans;
        }
        else {
            cout<<"Stack is empty"<<endl;
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 >= cap/2 + 1) {
            int ans = arr[top2];
            top2--;
            return ans;
        }
        else {
            cout<<"Stack is empty"<<endl;
            exit(1);
        }
    }
    
};

int main()
{
    TwoStacks s(5); 
    s.push1(5); 
    s.push2(10); 
    s.push2(15); 
    s.push1(11); 
    s.push2(7); 
    cout << "Popped element from stack1 is: " << s.pop1() << endl; 
    s.push2(40); 
    cout << "Popped element from stack2 is: " << s.pop2() << endl; 
    
    return 0;
}


*/



/*      Efficient

// Space efficient Implementation

// Stack start from both ends


*/

struct TwoStacks { 
    int* arr; 
    int cap; 
    int top1, top2; 
    
    TwoStacks(int n)  
    { 
        cap = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = cap; 
    } 
  
    void push1(int x) 
    { 
        if (top1 < top2 - 1) { 
            top1++; 
            arr[top1] = x; 
        } 
        else { 
            cout << "Stack Overflow"; 
            exit(1); 
        } 
    } 
  
    void push2(int x) 
    { 
        if (top1 < top2 - 1) { 
            top2--; 
            arr[top2] = x; 
        } 
        else { 
            cout << "Stack Overflow"; 
            exit(1); 
        } 
    } 
  
    int pop1() 
    { 
        if (top1 >= 0) { 
            int x = arr[top1]; 
            top1--; 
            return x; 
        } 
        else { 
            cout << "Stack UnderFlow"; 
            exit(1); 
        } 
    } 
  
    int pop2() 
    { 
        if (top2 < cap) { 
            int x = arr[top2]; 
            top2++; 
            return x; 
        } 
        else { 
            cout << "Stack UnderFlow"; 
            exit(1); 
        } 
    } 
};

int main() 
{ 
    TwoStacks ts(5); 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is "<<ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 
    return 0; 
}
