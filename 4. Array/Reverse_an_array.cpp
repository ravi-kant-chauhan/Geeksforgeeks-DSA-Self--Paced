#include<bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while(start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//  Time complexity = Theta(n)
//  Aux Space = Theta(1)


int main()
{
    int arr[] = {10, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr, n);

    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}