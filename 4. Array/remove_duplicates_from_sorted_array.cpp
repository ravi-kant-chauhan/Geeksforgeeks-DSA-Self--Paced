#include<bits/stdc++.h>
using namespace std;



/*  Creating temporary array

int removeDuplicate(int arr[], int temp[], int n) {
    temp[0] = arr[0];
    int index = 1;
    for(int i = 1; i<n; i++) {
        if(arr[i]!=arr[i-1]) {
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i = 0; i<index; i++) {
        arr[i] = temp[i];
    }
    return index;
}


Time complexity = O(n)
Space complexity = O(n)
*/



//  Better aproach
//  Time complexity = O(n)
//  Space complexity = O(1)

int removeDuplicate(int arr[], int n) {
    int index = 1;
    for(int i = 1; i<n; i++) {
        if(arr[i]!=arr[i-1]) {
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
} 
    

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    int temp[n];  

    /*
    int x = removeDuplicate(arr, temp, n);    // temp array method
    */

    int x = removeDuplicate(arr, n);

    for(int i = 0; i<x; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}