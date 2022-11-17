#include<bits/stdc++.h>
using namespace std;

/* Naive approach 

int lcm(int a, int b) {
    int ans = max(a, b);

    while(true) {
        if(ans%a == 0 && ans%b == 0)
            return ans;
        ans++;
    }

    return ans;
}

//  time complexity = O(a*b -max(a, b))

*/


/*  Efficient Solution

//  a*b = gcd(a, b) * lcm(a, b)



*/
int gcd(int a, int b) {
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

// time complexity = O(log(min(a, b)))

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<lcm(a, b)<<endl;
    return 0;
}