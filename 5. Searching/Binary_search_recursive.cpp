#include<bits/stdc++.h>
using namespace std;


/*      Binary search recursive



Time complexity =  log(n)  
Auxilary Space =  O(log(n))        // Function call stack

Iterative Binary Search is more better
As Recursive Search useds --> Function call overhead and extra space
*/

int searchElement(int arr[],int low, int high, int x) {
    if(low>high) 
        return -1;
    int mid = (low+high)/2;
    if(arr[mid]==x) {
        return mid;
    }
    else if(arr[mid]>x) {
        high = mid-1;
        return searchElement(arr, low, high, x);
    }
    else {
        low = mid+1;
        return searchElement(arr, low, high, x);
    }
}



int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;

    cout<<searchElement(arr, 0, n, x);
    return 0;
}


//  Extra information

/* 
     Maximum iteration is equal to the height of the tree
     --> ceiling of log(n) base 2

    it will be same even if the element is not present
    as first step is comparing low>high
    its is guaranteed log(n) for unsuccessful so it Theta(n)
*/