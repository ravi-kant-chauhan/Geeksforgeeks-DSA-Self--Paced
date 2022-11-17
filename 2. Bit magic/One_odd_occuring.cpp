#include<bits/stdc++.h>
using namespace std;

//  Find the odd occuring number in a given array?


/*  Naive Solution

int findOdd(vector<int> v) {
    int n = v.size();
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j = 0; j<n; j++) {
            if(v[j]==v[i]) {
                count++;
            }
        }
        if(count%2!=0) {
            cout<<(v[i])<<endl;
        }
    }
    return 0;
}


Time complexity = O(n*n)
*/


/*   Efficient Solution    *****( XOR operator)*****

1. x^0 = x
2. x^y = y^x
3. x^(y^z) = (x^y)^z

*4. x^x = 0 


XOR of even numbers will be 0


*/

int findOdd(vector<int> v) {
    int n = v.size();
    int ans = 0;
    for(int i = 0; i<n; i++) {   // even appearing elements will get removed
        ans = ans^v[i];
    }
    return ans;
}
// Time Complexity = O(n)


int main()
{
    vector<int> v={4, 3, 4, 4, 4, 5, 5};

    findOdd(v);

    return 0;
}