#include<bits/stdc++.h>
using namespace std;

/*   Naive approach

int gcd(int a, int b) {
    int ans = min(a, b);
    while(ans>0){
        if(a%ans == 0 && b%ans == 0) {
            break;
        }
        ans--;
    }
    return ans;
}

// time complexity  =  O(min(a,b))

*/


/*   Euclidean Algorithm

    if b < a

    gcd(a, b) = gcd(a-b, b)



// First approach

int gcd(int a, int b) {
    while (a != b) {
        if(a>b) {
            a = a-b;
        }
        else 
            b = b-a;
    }
    return a;
} 

*/


/*   Optimised version of Euclidean algorithm


*/

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}


int main()
{
    int a, b;
    cin>>a>>b;

    cout<<gcd(a, b)<<endl;

    return 0;
}