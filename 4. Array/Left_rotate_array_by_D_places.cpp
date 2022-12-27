#include<bits/stdc++.h>
using namespace std;

/*    Call leftRotate by one D times

void leftRotateOne(int arr[], int n) {
    int temp = arr[0];
    for(int i = 1; i<n; i++) {
        swap(arr[i-1], arr[i]);
    }
    arr[n-1] = temp;
}

void leftRotate(int arr[], int n, int d) {
    for(int i= 0; i<d; i++) {
        leftRotateOne(arr, n);
    }
}

//   Time complexity  =   d * Theta(n)
//   Auxilary space = Theta(1)
*/



/*      Using temp Array store upto d

void leftRotate(int arr[], int n, int d) {
    int temp[d];
    for(int i=0; i<d; i++) {
        temp[i] = arr[i];
    }
    for(int i = d; i<n; i++) {
        arr[i-d] = arr[i];
    }
    for(int i = 0; i<d; i++) {
        arr[n-d+i] = temp[i];
    }
}


// Time complexity = Theta(d+n-d+d) = Theta(n+d)
//                 = Theta(n)
//  Auxilary Space = Theta(d)

*/


/*          Three Reversal

First reverse first d elements
Then reverse remaining n-d elements
Finally reverse whole array elements

//   Theta(n) ->  time complexity

{1, 2, 3, 4, 5}
d = 2

first reverse call  ->  {2, 1, 3, 4, 5}
first reverse call  ->  {2, 1, 5, 4, 3}
first reverse call  ->  {3, 4, 5, 1, 2}


  Theta(d+ n-d + n) -> (2n)
//   Time complexity = Theta(n)
//   Auxilary Space = Theta(1)
*/

void reverseArray(int arr[], int low, int high) {
    while(low<high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[], int n, int d) {
    reverseArray(arr, 0, (d-1));
    reverseArray(arr, d, (n-1));
    reverseArray(arr, 0, (n-1));
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d;
    cin>>d;

    leftRotate(arr, n, d);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}