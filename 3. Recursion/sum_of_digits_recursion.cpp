#include<bits/stdc++.h>
using namespace std;


// Theta(digits)
// Aux space = Theta(d);
// Extra overhead


int digitSum(int n) {
    if(n==0) return 0;
    // if(n<= 9) return n;          // reduces one step

    return n%10 + digitSum(n/10);
}


// Iterative approach is more better


// int digitSum(int n) {
//     int ans = 0;
//     while(n>0) {
//         ans = ans + n%10;
//         n = n/10;
//     }
//     return ans;
// }


int main()
{
    int n;
    cin>>n;
    
    cout<<digitSum(n)<<endl;
    return 0;
}