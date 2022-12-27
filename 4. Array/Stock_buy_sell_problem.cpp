#include<bits/stdc++.h>
using namespace std;

//  Maximize profit


// Naive Approach
//     Using recursion
int stock(int arr[], int start, int end) {
    if(end<=start)
        return 0;
    int profit = 0;
    for(int i = start; i<end; i++) {
        for(int j = i+1; j<=end; j++) {
            if(arr[j]>arr[i]) {
                int curr_profit = arr[j]-arr[i] + stock(arr, start, i-1) + stock(arr, j+1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}



/*  Efficient Approach

Adding when it is increasing


//   My approach

int stock(int arr[], int n) {
    int ans = 0;
    int low = arr[0];
    int high = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]>high){
            high = arr[i];
            if(i==n-1){
                ans = ans + high-low;
            }
        }
        if(arr[i]<high) {
            ans = ans + (high-low);
            high = arr[i];
            low = arr[i];
        }
    }
    return ans;
}


//  Better Approach

int stock(int arr[], int n) {
    int profit = 0;
    for(int i=1; i<n; i++) {
        if(arr[i]>arr[i-1]) {
            profit += (arr[i]-arr[i-1]);
        }
    }
    return profit;
}
*/



int main()
{
    // 1, 5, 3, 8, 12
    int arr[] = {1, 5, 3, 1, 2, 8};

    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    int start = 0;
    cout<<stock(arr, start, end);

    // int n = sizeof(arr)/sizeof(arr[0]);

    // cout<<stock(arr, n);
    return 0;
}