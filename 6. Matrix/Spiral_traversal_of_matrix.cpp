#include<bits/stdc++.h>
using namespace std;

const int R = 4, C = 4;

void printSpiral(int arr[R][C])
{
    int l = 0, r = C-1, t = 0, b = R-1;
    bool a = true;

    while(t<=b && l<=r){
        for(int i = l; i<=r; i++){
            cout<<arr[t][i]<<" ";
        }
        t++;

        for(int i = t; i<=b; i++){
            cout<<arr[i][r]<<" ";
        }
        r--;

        if(t<=b){
            for(int i = r; i>=l; i--){
                cout<<arr[b][i]<<" ";
            }
            b--;
        }

        if(l<=r){
            for(int i = b; i>=t; i--){
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
    }
}


// Time complexity -  Theta(R*C)

int main()
{
    int arr[R][C] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printSpiral(arr);
    return 0;
}