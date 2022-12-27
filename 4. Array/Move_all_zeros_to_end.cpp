#include<bits/stdc++.h>
using namespace std;

/*   Naive method



//       *** My Approach  ***
//  traversing from last index
//    Time complexity = O(n^2)


void moveZeros(int arr[], int n ) {
    for(int i = n-2; i>=0; i--) {
        if(arr[i]==0) {
            for(int j = i+1; j<n; j++) {
                if(arr[j] == 0) {
                    break;
                }
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}



//         *****   Learnt Approach   *****

//  Traversing from starting index

void moveZeros(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == 0) {
            for(int j = i+1; j<n; j++) {
                if(arr[j]!=0) {
                    swap(arr[j-1], arr[j]);
                }
            }
        }
    }
}

*/


/*    Efficient Approach

//  Keep track of index of zero
//  Swap whenever non zero number occurs with the value at index



//  Time complexity = O(n)
*/

void moveZeros(int arr[], int n) {
    int index = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i] != 0) {
            swap(arr[index], arr[i]);
            index++;
        }
    }
}


/*   Move all zeros to start

void zerosStart(int arr[], int n)
{
    int index = n-1;
    for(int i = n-1; i>=0; i--){
        if(arr[i]!=0){
            swap(arr[i], arr[index]);
            index--;
        }
    }
}

*/


int main()
{
    int arr[] = {0, 8, 5, 0, 10, 0, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveZeros(arr, n);

    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}