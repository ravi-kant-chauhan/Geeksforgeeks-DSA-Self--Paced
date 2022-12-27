#include<bits/stdc++.h>
using namespace std;

// 

int insertElement(vector<int> v, int x, int pos, int cap){
    int n = v.size();
    if(n==cap) {
        return -1;
    }
    int idx = pos-1;
    for(int i = n-1; i>=idx; i--){
        v[i+1] = v[i];
    }
    v[idx] = x;
    return (n+1);
}

int main()
{
    vector<int> v = {3, 5, 6, 7, 56};

    int x, pos, cap;
    cin>>x>>pos>>cap;

    cout<<insertElement(v, x, pos, cap);
    return 0;
}