#include<bits/stdc++.h>
using namespace std;


const int R = 4, C = 4;


/*      Naive Approach

Traversing all the elements
O(n*n)

*/


/*      Efficient Approach


Time complexity = O(R+C)
*/

void searchIndex(int arr[R][C], int x){
    
    /*  Optimized

    if(x<arr[0][0] || x>arr[R-1][C-1]){
        cout<<-1;
        return;
    }
    
    */

    int i = 0, j = C-1;
    while(i<R && j>=0){

        

        if(arr[i][j]==x){
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(arr[i][j]<x){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<-1;
}


int main()
{
    int arr[R][C] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int x;
    cin>>x;

    searchIndex(arr, x);
    return 0;
}