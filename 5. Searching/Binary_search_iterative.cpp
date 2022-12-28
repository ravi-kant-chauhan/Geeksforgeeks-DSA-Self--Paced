#include<bits/stdc++.h>
using namespace std;

/*      Naive Approach

Does uses the fact that element is sorted

int searchElement(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

Time complexity = Theta(n)          // When element is not present
*/




/*     Efficient Solution

            Binary Search  (iterative)

Time complexity =  log(n)  
Auxilary Space = O(1)
*/

int searchElement(int arr[], int n, int x) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==x) {
            return mid;
        }
        else if(arr[mid]>x) {
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return -1;
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;

    cout<<searchElement(arr, n, x);

    return 0;
}