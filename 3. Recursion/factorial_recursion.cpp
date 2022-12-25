#include<bits/stdc++.h>
using namespace std;


/* Simple Recursion

int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1);
}
*/


// Tail recursion
// faster in execution

int fact(int n, int k) {
    if(n==0 || n==1)
        return k;
    return fact(n-1, k*n);
}

int main()
{
    int n;
    cin>>n;
    int k = 1;
    cout<<fact(n, k)<<endl;
    return 0;
}