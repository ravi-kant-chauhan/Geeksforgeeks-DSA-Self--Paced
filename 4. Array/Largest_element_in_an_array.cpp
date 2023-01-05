#include<bits/stdc++.h>
using namespace std;


// Time complexity = Theta(n)
// Space complexity

int maxElement(int arr[], int n) {
    int x = arr[0];
    for(int i=1; i<n; i++) {
        x = max(x, arr[i]);
    }
    return x;
}


int main()
{
    int arr[] = {2, 53, 5, 356, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxElement(arr, n)<<endl;
    return 0;
}