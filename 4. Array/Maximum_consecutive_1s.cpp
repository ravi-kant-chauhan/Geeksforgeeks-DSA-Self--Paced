#include<bits/stdc++.h>
using namespace std;

/*  Naive Solution

Two for loops
Count no. of occurence for each index
*/ 



/*      Efficient Solution

Time complexity = O(n)
Space Complexity = Theta(1)
*/
int maxOnes(int arr[], int n) {
    int ans = 0;
    int count = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i]==1) {
            count++;
        }
        else {
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(count, ans);
    return ans;
}


int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxOnes(arr, n);
    return 0;
}