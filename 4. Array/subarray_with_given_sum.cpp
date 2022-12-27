#include<bits/stdc++.h>
using namespace std;


// Incomplete

//    Find a subarray with given sum
//          No negative elements

void solve(int arr[], int n, int k){
    int start = 0;
    int end = 0;
    int sum = 0;
    for(int i = 0; i<n; i++){
        // while(sum > k && start < i-1){
        //     sum = sum+arr[i];
        //     start++;
        // }
        if(sum==k){
            cout<<"Yes"; 
            return;      
        }  
        else if(sum>k){
            sum = sum - arr[start];
            if(sum==k) {
                cout<<"yes"; 
                return;
            }
            start++;
        }
        else{
            sum = sum + arr[i];
            if(sum==k) {
                cout<<"yes"; 
                return;
            }
            end++;
        }
    }
    cout<<"No";
}


int main()
{
    int arr[] = {5, 6, 90, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k;
    cin>>k;

    solve(arr, n, k);
    return 0;
}