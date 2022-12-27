#include<bits/stdc++.h>
using namespace std;

//  Max value of arr[j]-arr[i]  such that j>i



/*  Naive Approach



int maximumDifference(int arr[], int n) {
    int maxdif= arr[1]-arr[0];
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            maxdif = max((arr[j]-arr[i]), maxdif);
        }
    }
    return maxdif;
}

Time complexity = Theta(n^2)
*/



/*  Efficient Solution


Time complexity = Theta(n)
Auxilary Space = Theta(1)
*/

int maximumDifference(int arr[], int n) {
    int maxdif = arr[1]-arr[0];
    int minVal = arr[0];
    for(int j=1; j<n; j++) {
        maxdif = max(maxdif, (arr[j]-minVal));
        minVal = min(minVal, arr[j]);
    }
    return maxdif;
}




int main()
{
    
    //    2, 3, 10, 6, 4, 8, 1
    int arr[] = {30, 10, 8, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maximumDifference(arr, n);
    return 0;
}