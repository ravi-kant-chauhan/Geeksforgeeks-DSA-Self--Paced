#include<bits/stdc++.h>
using namespace std;

// Iterative Solution

/*
int coutDigit(long n){
    int count = 0;
    while(n!=0){
        n = n/10;
        ++count;
    }
    return count;
}

*/

// Recursive Solution
/*
int coutDigit(long n) {
    if (n==0){
        return 0;
    }
    return 1 + coutDigit(n/10);
}


*/


// Logarithmic Solution

int coutDigit(long n) {
    return floor(log10(n)+1);
}



int main()
{
    int n;
    cin>>n;

    cout<<coutDigit(n)<<endl;
    return 0;
}