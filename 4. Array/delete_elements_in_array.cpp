#include<bits/stdc++.h>
using namespace std;

//  Incomplete


int deleteElement(vector<int> v, int x) {
    int n = v.size();
    int i;
    for(int i = 0; i<n; i++) {
        if(v[i] == x)
            break;
    }
    if(i==n)    
        return n;
    for(int j=i; j<n-1; j++)
        v[j] = v[j+1];
    return (n-1);
}

int main()
{
    vector<int> v = {3, 8, 12, 5, 6};
    int x;
    cin>>x;

    cout<<deleteElement(v, x);
    return 0;
}