#include<bits/stdc++.h>
using namespace std;

//  Given an array of n numbers that has values in range[1,.. n+1]. Every no.
//  appears exactly once. Hence one no. is missing. Find the missing no. ?

int missingNo(vector<int> v) {
    int n = v.size();
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^v[i];
    }
    for(int i=1; i<=n+1; i++) {
        ans = ans^i;
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 5, 3, 2};

    cout<<missingNo(v)<<endl;
    return 0;
}