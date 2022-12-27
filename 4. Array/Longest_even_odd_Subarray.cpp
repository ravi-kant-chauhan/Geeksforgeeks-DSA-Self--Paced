#include<bits/stdc++.h>
using namespace std;

/*     Naive Solution

int longestEvenOdd(int arr[], int n) {
    int ans = 1;
    for(int i = 0; i<n; i++) {
        int curr = 1;
        for(int j = i+1; j<n; j++) {
            if((arr[j]%2==0  && arr[j-1]%2 != 0) || (arr[j-1]%2==0  && arr[j]%2 != 0))
                curr++;
            else
                break;
        }
        ans = max(ans, curr);
    }
    return ans;
}

Time complexity =  O(n^2)

*/



/*  Efficient Solution


//  My Solution

int longestEvenOdd(int arr[], int n){
    int ans=1;
    int curr = 1;
    int prev = arr[0]%2;
    for(int i = 1; i<n; i++) {
        if(prev != arr[i]%2 ) {
            curr++;
            ans = max(ans, curr);
        }
        else {
            curr = 1;
        }
        prev = arr[i]%2;
    }
    return ans;
}





Time complexity = O(n)
*/

//  ** LEarnt Approach ** 

int longestEvenOdd(int arr[], int n){
    int ans=1;
    int curr = 1;
    for(int i = 1; i<n; i++) {
        if((arr[i]%2==0  && arr[i-1]%2 != 0) || (arr[i-1]%2==0  && arr[i]%2 != 0)) {
            curr++;
            ans = max(ans, curr);
        }
        else {
            curr = 1;
        }
    }
    return ans;
}


int main()
{
    //10, 12, 14, 7, 8     7, 10, 13, 14
    int arr[] = {7, 10, 13, 14};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<longestEvenOdd(arr, n);
    return 0;
}