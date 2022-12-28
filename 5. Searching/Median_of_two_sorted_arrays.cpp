#include<bits/stdc++.h>
using namespace std;

//     Incomplete




/*      Naive Approach

double findMedian(int arr1[], int arr2[], int n1, int n2) {
    double temp[n1+n2];
    for(int i = 0; i<n1; i++) {
        temp[i] = arr1[i];
    }
    for(int i = 0; i<n2; i++) {
        temp[n1+i] = arr2[i];
    }
    sort(temp, temp+n1+n2);

    if((n1+n2)%2!=0)
        return temp[0+(n1+n2)/2];
    else
        return (temp[(n1+n2-1)/2]+temp[(n1+n2+1)/2])/2;
}

Time complexity = O(n1+n2)*log(n1+n2);
Aux space = O(n1+n2);
*/

/*    Better solution

Naive approach can be optimized by using merge process of merge sort

Time complexity = O(n1+n2);


To be discussed in coming units
*/


/*      Efficient Solution
    O(log(n1))  when n1<=n2

//  Using Binary search



*/


double findMedian(int arr1[], int arr2[], int n1, int n2) {
    int begin = 0, end = n1;
    while(begin<=end) {
        int i1 = (begin+end)/2;
        int i2 = (n1+n2-1)/2-i;
        int min1 = (i1==n1) ? INT_MAX
    }
}




int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {5, 15, 25, 35, 45};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout<<findMedian(arr1, arr2, n1, n2);

    return 0;
}