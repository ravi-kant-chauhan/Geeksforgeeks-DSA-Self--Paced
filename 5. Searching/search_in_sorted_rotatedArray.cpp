#include<bits/stdc++.h>
using namespace std;


/*      Naive Approach

int searchIndex(int arr[], int n, int x) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

Time complexity = O(n)
Aux space = O(1)
*/


/*      Efficient Solution


Time complexity = O(log(n))
O(1)
*/



int searchIndex(int arr[], int n, int x) {
    int low = 0;                        // Like normal
    int high = n-1;                     // Binary search
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==x) return mid;

        if(arr[low]<arr[mid-1]) {           // left half sorted
            if(x>=arr[low] && x<arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }

        else                               // right half sorted
        {
            if(x>arr[mid] && x<=arr[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}



int main()
{
    int arr[] = {10, 20, 30, 40, 50, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x;
    cin>>x;

    cout<<searchIndex(arr, n, x);

    return 0;
}