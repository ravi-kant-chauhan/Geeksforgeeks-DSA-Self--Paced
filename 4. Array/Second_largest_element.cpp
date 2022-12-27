#include<bits/stdc++.h>
using namespace std;


/*  Naive Approach

//  Get the largest number first
//  Then find the number greatest but not equal to the largest

int getLargest(int arr[], int n) {
    int large = 0;
    for(int i = 1; i< n; i++) {
        if(arr[i] > arr[large]){
            large = i;
        }
    }
    return large;
}


int SecondLargest(int arr[], int n) {
    int largest = getLargest(arr, n);
    int ans = -1;

    for(int i = 0; i<n; i++) {
        if(arr[i] != arr[largest]){
            if(ans == -1) {
                ans = i;
            }
            else if(arr[i]>arr[ans])
                ans = i;
        }
    }
    return ans;
}



*/



//  Efficient Approach

// While traversing find largest and update second largest with current largest when larger value found



int SecondLargest(int arr[], int n) {
    int ans = -1, largest = 0;

    for(int i = 1; i<n; i++) {
        if(arr[i]>arr[largest]) {
            ans = largest;
            largest = i;
        }
        else if(arr[i]<arr[largest]) {
            if(ans ==-1 || arr[i]>arr[ans]){
                ans = i;
            }
        }
    }
    return ans;
}


int main()
{
    int arr[] = {3, 5, 64, 6, 34, 56, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<SecondLargest(arr, n);
    return 0;
}