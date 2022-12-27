#include<bits/stdc++.h>
using namespace std;


// Leader   ->   All elements on the right are smaller

/*   Naive Approach

void findLeaders(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int c = 0;
        for(int j = i+1; j<n; j++) {
            if(arr[i]<arr[j]){
                c = 1;
                break;
            }
        }
        if(c==0)
            cout<<arr[i]<<" ";
    }
}

Time complexity = O(n^2)
*/


/*  Efficient Solution

Time complexity = Theta(n)
*/

//  Elements are printed in reverse order
void findLeaders(int arr[], int n) {
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-1; i>=0; i--) {
        if(arr[i]>curr_leader) {
            curr_leader = arr[i];
            cout<<curr_leader<<" ";
        }
    }
}

//  To print in the correct order
//      Store the elements in an aux array and print the reverse of it


int main()
{
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    findLeaders(arr, n);

    // for(int i=0; i<n; i++) {
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}