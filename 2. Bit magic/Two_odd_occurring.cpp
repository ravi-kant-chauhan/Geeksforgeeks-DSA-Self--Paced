#include<bits/stdc++.h>
using namespace std;

// Find two odd occuring numbers

/*   Naive Approach

void oddCount(vector<int> v) {
    int n = v.size();
    for(int i=0; i<n; i++){
        int count=0;
        for(int j =0; j<n; j++) {
            if(v[i] == v[j]) {
                count++;
            }
        }
        if(count%2!=0)
            cout<<v[i]<<endl;
    }
}


It does not takes account that there are only two such numbers
It checks for all occurences

Time complexity = Theta(n^2)
*/

/*  Efficient Solution
1. Xor of all numbers
2.  XOR of two numbers has bits 1 if those bits are different and zero for different
5^6
5: 101
6: 110
-> 011



*/


// Incomplete

int main()
{
    vector<int> v={3, 4, 3, 4, 5, 4, 4, 6, 7, 7};

    oddCount(v);
    return 0;
}