#include<bits/stdc++.h>
using namespace std;

// bool isPrime(int n) {
//     if(n==1) return false;
//     if(n==2 || n==3) return true;
//     if(n%2==0 || n%3 == 0)
//         return false;
//     for(int i=5; i*i<=n; i+=6) {
//         if(n%i==0 || n%(i+2)==0)
//             return false;
//     }
//     return true;
// }

/*  Naive Solution

void allPrime(int n) {
    if(n<=1) return;
    for(int i=2; i<=n; i++) {      // theta(n)
        if(isPrime(i)) {
            cout<<i<<" ";
        }
    }
}

time complexity = o(n*root(n))
*/


/*    *********   Sieve of Eratosthenes    ********
1. Mark of multiples of 2 then 3 and so on....
2.  No need to traverse those which have been marked  e.g - 4, 6, 



void sieve(int n) {
    vector<bool> isPrime(n+1, true);
    for(int i = 2; i*i <= n; i++) {         //  count from 2, 3, 4
        if(isPrime[i]) {                        //  valid for 2, 3.. (not 4 ...)
            for(int j = 2*i; j <= n; j= j+i)        // makes multiple of valid numbers invalid
                isPrime[j] = false;                     // e.g - for valid 2, its mulitple 4 becomes invalid
        }
    }
    for(int i = 2; i<= n; i++) {
        if(isPrime[i]) {
            cout<<i<<" ";
        }
    }
}


*/


/*   Optimised version of Sieve

Earlier :  
 5: 10, 15, 20, 25
  ( they have multiples smaller than i(5)  : 2, 3,.. )

  //  So no need to mark them mulitiple times

New : 
 5: 25, 30..

Composite number smaller than i :
  i * (i-1)
  i * (i-2) ...

void sieve(int n) {
    vector<bool> isPrime(n+1, true);
    for(int i = 2; i*i <= n; i++) {         
        if(isPrime[i]) {                        
            for(int j = i*i; j <= n; j= j+i)       // replace 2*i to i*i
                isPrime[j] = false;                     
        }
    }
    for(int i = 2; i<= n; i++) {
        if(isPrime[i]) {
            cout<<i<<" ";
        }
    }
}



*/

//   ******  time complexity = O(nlog(log(n)))

/* Shorter verison of Sieve



*/
void sieve(int n) {
    vector<bool> isPrime(n+1, true);
    for(int i = 2; i<=n; i++) {
        if(isPrime[i]) {
            cout<<i<<" ";
            for(int j=i*i; j<=n; j=j+i)
                isPrime[j] = false;
        }
    }
}



int main()
{
    int n;
    cin>>n;

    // allPrime(n);

    sieve(n);

    return 0;
}