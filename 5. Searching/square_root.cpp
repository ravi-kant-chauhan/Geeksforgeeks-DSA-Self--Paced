#include<bits/stdc++.h>
using namespace std;

/*  Naive Approach

int squareRoot(int x) {
    int i = 1;
    while(i*i<=x) {
        i++;
    }
    return (i-1);
}


Time complexity = Theta(sqrt(x))
*/

int squareRoot(int x) {
    int low = 1;
    int high = x;
    int ans = -1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x) {
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return ans;
}


int main()
{
    int x;
    cin>>x;

    cout<<squareRoot(x);
    return 0;
}