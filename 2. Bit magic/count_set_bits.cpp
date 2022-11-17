#include<bits/stdc++.h>
using namespace std;

/* 1 Naive Solution

// Check the last bit by & with 1

int countSet(int n) {
    int count=0;
    while(n!=0) {
        if(n&1 == 1)    // | if(n%2 != 0 )  |  count = count + (n&1)
            count++;    // |
        n = n>>1;       // | n= n/2         |  n = n>>1
    }
    return count;
}

Time complexity = Theta(total bits in n)
*/


/*    Brain Kerningham Algorithm

***Imp  :   n&(n-1)  ->   Always unsets the rightmost set bit

int countSet(int n) {
    int count = 0;
    while(n>0) {
        n = (n & (n-1));
        count++;
    }
    return count;
}


turning off set bits
40 
n  =  101000
n-1 = 100111 
n & n-1  =   100000

Time complexity =  Theta(Set bit count)
*/


/*   Lookup Table


Time complexity = Theta(1)
*/
//  Incomplete


int main()
{
    int n;
    cin>>n;

    cout<<countSet(n)<<endl;
    return 0;
}