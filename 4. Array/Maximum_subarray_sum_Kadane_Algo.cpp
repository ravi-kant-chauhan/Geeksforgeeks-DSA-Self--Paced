#include<bits/stdc++.h>
using namespace std;

/*    Naive Approach


int maxSum(int arr[], int n) {
    int ans = arr[0];
    for(int i=0; i<n; i++) {
        // int sum = arr[i];                // my complicated approach
        // ans = max(ans, sum);
        // for(int j = i+1; j<n; j++) {
        //     sum += arr[j];
        //     ans = max(ans, sum);
        // }

        int sum = 0;
        for(int j=i; j<n; j++) {
            sum = sum + arr[j];
            ans = max(ans, sum);
        }

    }
    return ans;
}


Time complexity = O(n^2)
Auxilary Space =  Theta(1)
*/




/*      Efficient Solution


//     My  Approach 

//    Not working for   -->  {-3, 8, -2, 4, -5, 6}

int maxSum(int arr[], int n) {
    int ans = arr[0];
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum = sum + arr[i];                     // Not working for some cases
        if(sum>0) {
            ans = max(ans, sum);
        }
        else {
            sum = arr[i];
            ans = max(ans, sum);
        }
    }
    return ans;
}


//   **** Learnt Approach ****
 * MaxEnding at previous index + current or only current 
maxEnding[i] = max(maxEnding(i-1) + arr[i],  arr[i])


Time complexity = O(n)
*/

int maxSum(int arr[], int n) {
    int ans = arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<n; i++) {
        maxEnding = max(maxEnding + arr[i],  arr[i]);
        ans = max(ans, maxEnding);
    }
    return ans;
}



int main()
{
    //   -3, 8, -2, 4, -5, 6     -6, -1, -8
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSum(arr, n);
    return 0;
}