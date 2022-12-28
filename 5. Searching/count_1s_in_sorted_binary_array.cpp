#include<bits/stdc++.h>
using namespace std;

/*      Naive Approach

int countOnes(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        if(arr[i]==1) {
            return n-i;
        }
    }
    return 0;
}


O(n)
*/


//   Modified form of first index search

int countOnes(int arr[], int n) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==0) {
            low = mid+1;
        }
        else {
            if(mid==0 ||  arr[mid-1]!=1) {
                return (n-mid);
            }
            else
                high = mid-1;
        }
    }
    return 0;
}

// O(log(n))
// O(1)

int main()
{
    int arr[] = {0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<countOnes(arr, n);
    return 0;
}