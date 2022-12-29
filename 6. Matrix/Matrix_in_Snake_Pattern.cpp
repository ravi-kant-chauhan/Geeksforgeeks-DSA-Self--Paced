#include<bits/stdc++.h>
using namespace std;

#define n 4

void printPattern(int arr[n][n]){
    for(int i= 0; i<n; i++){
        if(i%2==0){
            for(int j = 0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j = n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}


// Time complexity = Theta(R*C)


int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printPattern(arr);
    return 0;
}