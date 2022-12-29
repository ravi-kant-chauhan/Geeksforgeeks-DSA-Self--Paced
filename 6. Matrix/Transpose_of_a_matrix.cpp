#include<bits/stdc++.h>
using namespace std;

const int R = 4, C = 4;


/*    Naive Approach

Using Temp Array


void printTranspose(int arr[R][C]){
    int temp[C][R];
    for(int i = 0; i<R; i++){
        for(int j = 0; j<C; j++){
            temp[j][i] = arr[i][j];
        }
    }

    for(int i = 0; i<C; i++){
        for(int j = 0; j<R; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/


/*          Efficient Approach


Does not works if Rows and Columns are different


TIme Complexity = O(R*C)
*/


void printTranspose(int arr[R][C])
{
    for(int i = 0; i<R; i++){
        for(int j = i+1; j<C; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i<R; i++){
        for(int j = 0; j<C; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int arr[R][C] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printTranspose(arr);
    return 0;
}