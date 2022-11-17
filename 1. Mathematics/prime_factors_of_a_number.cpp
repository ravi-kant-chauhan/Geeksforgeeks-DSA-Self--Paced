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


/* ******* Naive approach *******

void primeFactor(int n) {
    for(int i = 2; i<n; i++){   // theta(n)
        if(isPrime(i)) {            O(n)
            int x = i;
            while(n%x == 0) {
                cout<<i<<" ";         O(log(n))
                x = x * i;
            }
        }
    }
}


Time complexity  =  O(n^2(log(n)))

*/



/* ****** Efficient Solution ******

1.  Divisor always appear in pair
2. A no. n can be written as multiplications of power of prime factors

void primeFactor(int n) {
    if(n<=1) return;
    for(int i = 2; i*i<=n; i++) {
        int a = true;
        while (n%i == 0){
            if(a)
                cout<<i<<" ";
            n = n/i;
            a = false;
        }
    }
    if(n>1)
        cout<<n<<endl;
}

***method used while finding all factors of a number diving by 2 completely, then 3..
for 4 already done by 2, then for 5....

*/



//   *** More efficient method....
//   By skipping multiples of 2 and 3...

void primeFactor(int n) {
    if(n<=1) return;
    while(n%2 == 0) {
        cout<<2<<" ";
        n = n/2;
    }
    while(n%3 == 0) {
        cout<<3<<" ";
        n = n/3;
    }
    for(int i = 5; i*i<=n; i+=6) {
        while (n%i == 0){            // for prime no. while loop will not be executed
            cout<<i<<" ";               // n will not be reduced drastically
            n = n/i;                //  Theta(root(n))
        }
        while (n%(i+2) == 0){
            cout<<(i+2)<<" ";
            n = n/(i+2);
        }
    }
    if(n>3)
        cout<<n<<endl;
}



int main()
{
    int n;
    cin>>n;

    primeFactor(n);
    return 0;
}