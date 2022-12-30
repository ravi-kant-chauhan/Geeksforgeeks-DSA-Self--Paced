#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*      ** Array **
    int arr[] = {10, 20, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    for(int x:arr)
        cout<<x<<" ";

    sort(arr, arr+n, greater<int>());   // sorts in reverse order

    cout<<endl;
    for(int x: arr)
        cout<<x<<" ";  

    */

    vector<int> v = {5, 7, 20, 10};

    sort(v.begin(), v.end());
    for(int x: v)
        cout<<x<<" ";
    cout<<endl;

    sort(v.begin(), v.end(), greater<int>());
    for(int x: v)
        cout<<x<<" ";

    return 0;
}