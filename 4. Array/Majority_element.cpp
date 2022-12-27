#include<bits/stdc++.h>
using namespace std;

//  Majority Element -->   An element which appears more than n/2 times in the array(size n)

/*    Naive Solution


int majorityElement(int arr[], int n) {
    for(int i=0; i<=n/2; i++) {
        int count = 1;
        for(int j = i+1; j<n; j++) {
            if(arr[j]==arr[i]) {
                count++;
            }
        }
        if(count>n/2) {
            return arr[i];
        }
    }
    return -1;
}


Time complexity = O(n^2)
*/


/*  Efficient Solution

//  May not give first index

Time complexity = O(n)
*/

//  Moore's Voting Algo

// Elements cancel each other,  remaining which does not cancel becomes the majority element

//Eg:  6 8 7 6 6
//     1 0 1 0 1

//Eg:  8 8 6 6 6 6
//     1 2 1 0 1 1


int majorityElement(int arr[], int n) {

    int ans = 0;                    // Finds a candidate
    int count =1;
    for(int i = 1; i<n; i++) {
        if(arr[ans] == arr[i])
            count++;
        else
            count--;
        if(count==0) {
            ans = i;
            count = 1;
        }
    }

    count = 0;                      // Checks if the candidate
    for(int i=0; i<n; i++) {        // is actually a majority
        if(arr[ans] == arr[i])
            count++;
    }               
    if(count<=n/2) 
        ans = -1;
    return ans;
}

int main()
{
    int arr[] = {4, 4 , 4, 4, 5, 8, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<majorityElement(arr, n);
    return 0;
}