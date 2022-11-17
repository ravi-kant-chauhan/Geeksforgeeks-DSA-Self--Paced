#include<bits/stdc++.h>
using namespace std;

//  To check if x is power of 2 or not


/*  Naive approach
Dividing by 2 till we get 0 or non zero number

bool power(int n) {
    if(n==0) return false;
    while(n!=1) {
        if(n%2 != 0) {
            return false;
        }
        n=n/2;
    }
    return true;
}


*/


//     ** Every power of 2 has only one 1 set bit


/*    Using Brain Kerningham Algorithm

count the no. of set bits
    *** If it is 1 then it is a power of two


Time complexity = Theta(Set bit count)
*/


/*   Efficient

Unset the only set bit -->  If the number is zero then it is power of 2
                                Else not

bool power(int n) {
    if(n==0) return false;
    return ((n&(n-1))==0);    // unsetting the rightmost set bit
}

*/

// one line solution

bool power(int n) {
    return (n!=0)&& ((n&(n-1))==0);
}



int main()
{
    int n;
    cin>>n;

    cout<<power(n);

    return 0;
}