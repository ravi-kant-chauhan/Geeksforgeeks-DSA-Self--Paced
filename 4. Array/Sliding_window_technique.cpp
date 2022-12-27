#include<bits/stdc++.h>
using namespace std;

// Maximum sum of K consecutive element


/*    Naive Approach


// My Solution

int consecutiveSum(int arr[], int n, int k) {
    int ans = arr[0] + arr[1] + arr[2];     // Wrong initialisation
    for(int i=1; i<=n-k; i++) {
        int sum = 0;
        for(int j=i; j<i+k; j++) {
            sum += arr[j];
        }
        ans = max(ans, sum);
    }

    return ans;
}


//      Learnt Approach

int consecutiveSum(int arr[], int n, int k) {
    int max_sum = INT_MIN;
    for(int i = 0; i+k-1<n; i++) {
        int sum = 0;
        for(int j = 0; j<k; j++) {
            sum += arr[i+j];
        }
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}


Time complexity = O((n-k) * k)
*/

/*    Efficient Solution

// Window Sliding Technique
//    Sliding one by one -->  Adding one on right | Subtracting one on left



Time Complexity = O(n)
*/

// Window Sliding technique

int consecutiveSum(int arr[], int n, int k) {          
    int curr_sum = 0;
    for(int i=0; i<k; i++){
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k; i<n; i++) {
        curr_sum += (arr[i] - arr[i-k]);
        max_sum = max(max_sum, curr_sum);
    }

    return max_sum;
}



int main()
{
    //  1, 8, 30, -5, 20, 7  
    int arr[] = {5, -10, 6, 90, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;

    cout<<consecutiveSum(arr, n, k);

    return 0;
}

