#include<bits/stdc++.h>
using namespace std;

/*      Naive Approach

int countOccurence(int arr[], int n, int x) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]==x) {
            count++;
        }
    }
    return count;
}


O(n)
*/


/*      
*/

int firstIndex(int arr[], int n, int x) {
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
            if(mid==0 ||  arr[mid-1]!=x) {
                return mid;
            }
            else
                high = mid-1;
        }
    }
    return -1;
}


int lastIndex(int arr[], int n, int x) {
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
            if(mid==0 ||  arr[mid+1]!=x) {
                return mid;
            }
            else
                low = mid+1;
        }
    }
    return -1;
}


int countOccurence(int arr[], int n, int x) {
    int first = firstIndex(arr, n, x);
    if(first == -1)
        return 0;
    else
        return  (lastIndex(arr, n, x)-first +1);
}

//  Time complexity =  O(log(n))


int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;

    cout<<countOccurence(arr, n, x);
    return 0;
}