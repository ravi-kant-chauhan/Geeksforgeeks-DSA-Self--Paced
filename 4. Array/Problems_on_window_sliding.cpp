#include<bits/stdc++.h>
using namespace std;

//  Q.  Find whether there is a subarray of size k with sum = x?

int consecutiveSum(int arr[], int n, int k, int sum) {          // Window Sliding technique
    int curr_sum = 0;
    for(int i=0; i<k; i++){
        curr_sum += arr[i];
    }
    if(curr_sum == sum)
            return 1;
    for(int i=k; i<n; i++) {
        curr_sum += (arr[i] - arr[i-k]);
        if(curr_sum == sum)
            return 1;
    }

    return -1;
}



int main()
{
    //  1, 8, 30, -5, 20, 7  
    int arr[] = {5, -10, 6, 90, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k, sum;
    cin>>k>>sum;

    cout<<consecutiveSum(arr, n, k, sum);

    return 0;
}