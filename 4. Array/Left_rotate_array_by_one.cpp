#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n) {
    // int temp = arr[0];      //  for swap not required  
    for(int i = 1; i<n; i++) {
        swap(arr[i-1], arr[i]);     
    //  arr[i-1] = arr[i];          //  temp required for shifting 
    }
    // arr[n-1] = temp;
}

// Time complexity = Theta(n)
// Auxilary Space = Theta(1)

int main()
{
    int arr[]  = {34, 1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, n);

    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}