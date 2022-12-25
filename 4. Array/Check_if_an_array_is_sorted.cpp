#include<bits/stdc++.h>
using namespace std;


// Naive Approach
/*  
    Using two for loops
    O(n^2)
*/

//  Efficient Approach

// time complexity = O(n)
bool sortCheck(int arr[], int n) {
    for(int i = 1; i<n; i++) {
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}


int main()
{
    int arr[] = {8, 12, 12, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<sortCheck(arr, n)<<endl;
    return 0;
}