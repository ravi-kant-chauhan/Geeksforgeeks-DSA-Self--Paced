#include<bits/stdc++.h>
using namespace std;
/*
//  Given a fixed array and multiple queries, how do you perform these queries in the most efficient manner?





//  Naive approach
//   O(n) loop for each query   ->  O(n*n)


//  Efficient Solution

//    Prefix sum

//  Creating a prefix arr containing sum till curr index
//  returning sum till given index in O(1) time
//  for start = 0 simply return sum till end
// for rest return sum till end - sum before start

int solve(int temp[], int a, int b){
    int ans = 0;
    if(a==0){
        ans = temp[b];
    }
    else{
        ans = temp[b]-temp[a-1];
    }
    return ans;
}


int main()
{
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int temp[n];
    int sum = 0;
    for(int i = 0; i<=n; i++){
        sum += arr[i];
        temp[i] = sum;
    }
    
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<solve(temp, a, b);
    }
    return 0;
}



*/





//  Given an array of integers, find wheter it has an equilibrium point?

#include<bits/stdc++.h>
using namespace std;

/*
// Naive Approach

void solve(int arr[], int n)
{
    for(int i = 1; i<n-1; i++)
    {
        int leftsum = 0;
        for(int j=0; j<i; j++){
            leftsum += arr[j];
        }
        int rightsum = 0;
        for(int j = i+1; j<n; j++){
            rightsum += arr[j];
        }
        if(leftsum==rightsum){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
}
*/

/*

//     Efficient Approach

//   Prefix & suffix sum


void solve(int arr[], int n)
{
    int leftprefix[n];
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
        leftprefix[i] = sum;
    }
    int rightprefix[n];
    sum = 0;
    for(int i = n-1; i>=0; i--){
        sum += arr[i];
        rightprefix[i] = sum;
    }


    if(leftprefix[n-1]==0 || rightprefix[0]){
        cout<<"Yes";
        return;
    }
    for(int i = 1; i<n-1; i++){
        if(leftprefix[i-1]==rightprefix[i+1]){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
}



//    Time complexity = O(n)
//    Auxiliary space = O(n)

*/


/*
// Most effiecient




//    Time complexity = O(n)
//    Auxiliary space = O(n)
*/

void solve(int arr[], int n)
{
    int total = 0;
    for(int i = 0; i<n; i++)
    {
        total += arr[i];
    }
    int prefixSum = 0;
    for(int i = 0; i<n; i++){
        total = total-arr[i];
        if(total == prefixSum){
            cout<<"Yes";
            return;
        }
        prefixSum += arr[i];
    }
    cout<<"No";
}

int main()
{
    //  1,3, 4, 8, -9, 20, 6, 1         // 2, -2, 4
    int arr[] = {4, -2, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    solve(arr, n);
    return 0;
}