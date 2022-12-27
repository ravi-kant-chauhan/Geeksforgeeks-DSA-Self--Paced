#include<bits/stdc++.h>
using namespace std;


/*      Naive Approach

int maxCircularSum(int arr[], int n) {
    int ans = arr[0];
    for(int i=0; i<n; i++) {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j = 1; j < n; j++)
		{
			int index = (i + j) % n;
			curr_sum += arr[index];
            curr_max = max(curr_max, curr_sum);
        }
        ans = max(ans, curr_max);
    }
    
    return ans;
}

Time complexity = O(n^2)
*/



/*          Efficient Solution

Take maximum of :
1. Max Sum of a normal subarray (Easy:  Kadane)
2. Max Sum of a circular subarray

(find minimum subarray and subtract from the rest total sum)



Time complexity = O(n)      (3 * Theta(n))
*/

int normalMaxSum(int arr[], int n) {        //  Kadane's Algo
    int ans = arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<n; i++) {
        maxEnding = max(maxEnding + arr[i],  arr[i]);
        ans = max(ans, maxEnding);
    }
    return ans;
}
int maxCircularSum(int arr[], int n) {
    int max_normal = normalMaxSum(arr, n);      // Normal max sum

    if(max_normal<0) {                      // If its -ve whole array is negative
        return max_normal;                  //   Hence returned value is maximum
    }

    int arr_sum = 0;                        // Circular sum
    for(int i = 0; i<n; i++) {
        arr_sum += arr[i];              // finding normal sum
        arr[i] = -arr[i];                // Inverting the array to find max
    }                                   // Instead of finding min in noral array
    int max_circular = arr_sum + normalMaxSum(arr, n);      // Adding the max to normal sum
                                // Instead of subtracting min from normal sum
    return max(max_normal, max_circular);

}



int main()
{
    //5, -2, 3, 4   -8, 7, 6  
    int arr[] = {8, -4, 3, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxCircularSum(arr, n)<<endl;
    return 0; 
}