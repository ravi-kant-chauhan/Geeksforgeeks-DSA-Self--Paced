#include<bits/stdc++.h>
using namespace std;

/*  Naive Solution

int computingPower(int x, int n) {
    int ans = 1;
    for(int i = 0; i<n; i++) {
        ans = x*ans;
    }
    return ans;
}

time complexity = Theta(n)
*/



/*    Efficient Solution

//     Using Recursion

power(x, n)  =  if n%2==0   -->  power(x, n/2) * power(x, n/2)
                else        -->  power(x, n-1) * x


int computingPower(int x, int n) {
    if(n==0) return 1;

    int temp = computingPower(x, n/2);
    temp = temp*temp;
    if(n%2==0)
        return temp;
    else 
        return temp*x;
}


Recursion tree

T(n) = T(n/2) + Theta(1)
Time complexity  =  Theta(log(n))
Auxilary function = Theta(n)


** It also has function overhead
*/


/*   ****  Using Iteration   (Binary Exponentiation)  *****

//   1. Every no. can be represented as sum of power of 2(set bits in binary representation)
//   2. We can traverse through all bits of a number (from LSB to MSB) in O(log n) time
    3^10 = 3^8 * 3^2          |  10 : 1010   -->  3^8 3^4 3^2 3^1
    3^19 = 3^16 * 3^2 * 3^1   |  19 : 10011  -->  3^16 3^8 3^4 3^2 3^1


Time complexity = O(log n)
Aux space = O(1)

*/

int computingPower(int x, int n) {
    int ans = 1;
    while(n>0) {
        if(n%2 != 0)      //  checking for set bits
            ans = ans * x;
        x = x*x;
        n = n/2;
    }
    return ans;
}


int main()
{
    int x, n;
    cin>>x>>n;

    cout<<computingPower(x, n)<<endl;
    return 0;
}