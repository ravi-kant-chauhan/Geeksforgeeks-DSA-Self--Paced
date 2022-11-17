#include<bits/stdc++.h>
using namespace std;

/*  Naive method

bool isPrime(int n) {
    if(n==1) return false;
    for(int i = 2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

Time complexity = O(n)

*/


/*  Efficient method


1. Divisor always appear in pairs

2. One of the divisor in every pair is smaller than or equal to root(n)


bool isPrime(int n) {
    if(n==1) return false;
    for(int i = 2; i*i<=n; i++) {
        if(n%i==0) return false;
    }
    return true;
}


Time complexity = O(root(n))

*/



//  More better approach 
// to check for n%2 and n%3
//  it skips divisibility check of all the even numbers and multiples of 3

bool isPrime(int n) {
    if(n<=1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3 == 0)
        return false;
    for(int i=5; i*i<=n; i+=6) {
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}

// reduces the complexity by 3 times

int main()
{
    int n;
    cin>>n;

    cout<<isPrime(n)<<endl;
    return 0;
}