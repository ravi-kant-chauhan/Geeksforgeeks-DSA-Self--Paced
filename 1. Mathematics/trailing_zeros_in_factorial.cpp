#include<bits/stdc++.h>
using namespace std;

/*  My solution


int countTrail(int n) {
    int fact = 1;
    for(int i=n; i>1; i--){
        fact *= i;
    }
    int count = 0;
    while(fact%10 == 0){
       count++;
       fact/=10;
    }
    return count;
}


// time complexity = Theta(n)

//  Overflow even in slightly higher values of n.

*/


/*
// Efficient solution

// Number of zeros is equivalent to the number of 2 and 5

//  For factorial, 5 has minimum occurence compared to 2


//   trailing zeros count = n/5 + n/25 + n/125 .... 
            depending on the number of input  --> 24, 124, 

*/

int countTrail(int n) {
    // return n/5 + n/25;

    int count = 0;
    for(int i = 5; i<=n; i=i*5){    // 5^k <= n
        count = count + n/i;       //  k <= logn
    }                                   //  theta(log(n))

    return count;
}

int main()
{
    int n;
    cin>>n;

    cout<<countTrail(n)<<endl;

    return 0;
}