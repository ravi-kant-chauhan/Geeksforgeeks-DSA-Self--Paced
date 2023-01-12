#include<bits/stdc++.h>
using namespace std;


/* Naive Solution

void divisor(int n) {
    for(int i=1; i<=n; i++){
        if(n%i==0) {
            cout<<i<<" ";
        }
    }
}


Time complexity =  theta(n)
Auxilary space = theta(1)
*/


/*  Efficient Solution


1. Divisor in pair
2. one of the divisor <= root(n)


void divisor(int n) {
    for(int i = 1; i*i<= n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i != n/i)
                cout<<n/i<<" ";
        }
    }
}
//  The output is not in sorted order


*/

void divisor(int n) {
    int i;
    for(int i = 1; i*i < n; i++){       /// Doubt in this part
        if(n%i == 0)
            cout<<i<<" ";
    }
    for( ; i>=1; i--) {
        if(n%i == 0)
            cout<<n/i<<" "; 
    }
}


int main()
{
    int n;
    cin>>n;

    divisor(n);
    return 0;
}