#include<bits/stdc++.h>
using namespace std;

const int R = 3, C = 3;

//  Find Median

//  Assumption  :   1. Odd sized matrix
//                  2. All distinct elements


/*      Naive Approach

1. Put all elements in an array             -> O(r*c)
2. Sort the array                               -> O(r*c log(r*c))
3. Return the middle element of the sorted array    -> O(1)


*/




/*        Efficient Approach



Time Complexity - O(R*log(max-min)*logC)
*/

int printMedian(int arr[R][C])
{
    
}

int main()
{
    int arr[R][C] = {
        {1, 10, 20},
        {15, 25, 35},
        {5, 30, 40}
    };

    cout<<printMedian(arr);
    return 0;
}