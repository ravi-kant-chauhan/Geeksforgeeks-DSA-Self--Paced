#include<bits/stdc++.h>
using namespace std;

// Print any peak element
// Peak element --> local maximum



/*      Naive Approach

int peakElement(int arr[], int n) {
    if(n==1) {
        return arr[0];
    }
    if(arr[0]>arr[1])
        return arr[0];
    if(arr[n-1]>arr[n-2])
        return arr[n-1];
    for(int i = 1; i<n-1; i++) {
        if(arr[i-1]<=arr[i] && arr[i]>=arr[i+1])
            return arr[i];
    }
    return 0;
}


Time complexity = O(n)
*/


/*   Efficient Solution

if element on the left is greater that means the peak element is on the left


Time complexity = O(log(n))
*/

int peakElement(int arr[], int n) {
    int low = 0, high = n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;
        if(mid>0 && arr[mid-1] >= arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}



int main()
{
    int arr[] = {10, 20, 90, 10, 20, 30, 45, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<peakElement(arr, n);
    return 0;
}