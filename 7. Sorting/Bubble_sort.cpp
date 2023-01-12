#include<bits/stdc++.h>
using namespace std;

//          BUBBLE Sort  ->  stable algorithm


/*
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n-i-1; j++)
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
}

Time complexity = O(n2)

*/


//    Optimized Implementation   for already sorted array

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for(int i = 0; i<n; i++)
    {
        swapped = false;
        for(int j = 0; j<n-i-1; j++)
            if(arr[j]> arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        
        if(swapped == false)
            break;
    }
}



// Time complexity -->  Not always n^2 


int main()
{
    int a[] = {2, 1, 3, 4};
    bubbleSort(a, 4);
    for(int i = 0; i<4; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}