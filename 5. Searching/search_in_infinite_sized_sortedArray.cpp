#include<bits/stdc++.h>
using namespace std;


/*  Naive Approach

int searchIndex(int arr[], int x) {
    int i = 0;
    while(true) {               // Infinite loop
        if(arr[i]==x)
            return i;
        if(arr[i]>x)
            return -1;
        i++;
    }
}


Time complexity = O(position)
Aux Space = O(1)
*/

/*      Efficient Solution




Time complexity = Log(position)
*/

int binarySearch(int arr[], int x, int low, int high) {
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


int searchIndex(int arr[], int x) {
    if(arr[0]==x) return 0;
    int i=1;
    while(arr[i]<x)
        i = i*2;
    if(arr[i]==x) return i;

    return binarySearch(arr, x, i/2+1, i-1);
}




int main()
{
    int arr[100] = {1, 10, 15, 20, 40, 80, 90, 100, 120  };
    int x;
    cin>>x;

    cout<<searchIndex(arr, x);

    return 0;
}