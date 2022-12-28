#include<bits/stdc++.h>
using namespace std;

/*     Naive Approach

int searchIndex(int arr[], int n, int x) {
    for(int i=n-1; i>=0; i--) {
        if(arr[i]==x) {
            return i;
        }
    }
    return -1;
}


O(n)  --> Time
O(1)  --> Space
*/

/*   Better approach

Recursive Binary Solution



int searchIndex(int arr[], int low, int high, int x) {
    if(low>high)
        return -1;
    int mid = (low+high)/2;
    if(arr[mid]>x) {
        high = mid-1;
        return searchIndex(arr, low, high, x);
    }
    else if(arr[mid]<x) {
        low = mid+1;
        return searchIndex(arr, low, high, x);
    }
    else {
        if(mid==0|| arr[mid+1]!= arr[mid])
            return mid;
        else
            return searchIndex(arr, mid+1, high, x);
    }
}


log(n)

*/




/*      Efficient Solution

Iterative Binary search



log(n)
O(1)
*/


int searchIndex(int arr[], int n, int x) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]>x) {
            high = mid-1;
        }
        else if(arr[mid]<x) {
            low = mid+1;
        }
        else {
            // for(int i=mid; i>=0; i--) {
            //     if(i==0 || arr[i-1]!=x){
            //         return i;
            //     }
            // }
            
            if(mid==0 ||  arr[mid+1]!=x) {
                return mid;
            }
            else
                low = mid+1;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {1, 10, 10, 10, 20, 20, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;

    // cout<<searchIndex(arr, n, x);    // For naive approach
    // cout<<searchIndex(arr, 0, n, x);   //  For recursive
    cout<<searchIndex(arr, n, x);           // For iterative

    return 0;
}