#include<bits/stdc++.h>
using namespace std;


//   Unsorted array problem

/*  Q. Given an unsorted array and a number x, find if there is a pair
  with sum equal to x ?
*/


/*  Naive Approach

bool checkPair(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            if(i==j)    continue;
            if(arr[i]+arr[j]==x)    return true;
        }
    }
    return false;
}

Time complexity =  O(n^2)
*/


/*      Efficient Solution

    ****  Using Hashing  ****

Time complexity =  O(n)
Space complexity = O(n)
*/


//   Sorted array problem

/*    Two Pointer Approach     is best for sorted,  space -- O(1)


if sum is less -->  shift left pointer as shifting right pointer will give more smaller value

if sum is greater -->   shift right pointer as shifting left pointer will give more higher value

bool checkPair(int arr[], int n, int x) {    // Two pointer approach
    int left = 0,  right = n-1;
    while(left<right) {
        if(arr[left]+arr[right] == x)
            return true;
        else if(arr[left]+arr[right]>x)
            right--;
        else
            left++;
    }
    return false;
}

Time complexity =  O(n)
Space complexity = O(1)
*/



//  Q.   Find if there is a triplet with given sum

//     Sorted Approach

/*   Naive Approach

Three for loops

O(n^3)
*/

/*  Efficient Approach


Time complexity = O(n^2)
*/

bool isPair(int arr[], int left, int right, int x) {    // Two pointer approach
    while(left<right) {
        if(arr[left]+arr[right] == x)
            return true;
        else if(arr[left]+arr[right]>x)
            right--;
        else
            left++;
    }
    return false;
}

bool checkPair(int arr[], int n, int x) {  
    for(int i=0; i<n; i++) {
        if(isPair(arr, i+1, n-1, x-arr[i]))
            return true;
    }
    return false;
}

// For unsorted approach   -->   first sort in O(log(n)) then this approach
//                  -->  overall complexity = O(n^2)

int main()
{
    int arr[] = {3, 5, 9, 2, 8, 10, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;

    cout<<checkPair(arr, n, x);

    return 0;
}

/*          Questions on two pointer approach

Q. Count pairs with given sum
Q. Count Triplets with given sum
Q. Find if there is a triplet a, b, c such that a^2+b^2=c^2

*/