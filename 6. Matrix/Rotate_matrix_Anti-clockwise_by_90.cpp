#include<bits/stdc++.h>
using namespace std;


const int n = 4;

/*      Naive Approach

Using temp matrix

void printRotate(int arr[n][n])
{
    int temp[n][n];
    for(int i = n-1; i>=0; i--){                    //  Travering from last col - top to bottom
        for(int j = 0; j<n; j++){
            temp[n-i-1][j] = arr[j][i];
        }
    }
    //                  Learnt Approach   ->   A bit simple
    //                             for(int i = 0; i < n; i++)           // Traversing from first row -  left to right
	//                             	for(int j = 0; j < n; j++)
	//                             		temp[n - j - 1][i] = mat[i][j];
    

    for(int i = 0; i<n; i++){
        for(int j= 0; j<n; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}

Time complexity = Theta(n*n)
Aux Space = Theta(n*n)
*/

/*      Efficient  Approach



*/

void printRotate(int arr[n][n])
{
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            swap(arr[j][i], arr[i][j]);
        }
    }

    for(int i = 0; i<n/2; i++){
        for(int j = 0; j<n; j++){
            swap(arr[i][j], arr[n-i-1][j]);
        }
    }


    /*          or

        for(int i = 0; i < n; i++)
	{
	    int low = 0, high = n - 1;
	    
	    while(low < high)
	    {
	        swap(mat[low][i], mat[high][i]);
	        
	        low++;
	        high--;
	    }
	}
    
    */

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int arr[n][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printRotate(arr);
    return 0;
}