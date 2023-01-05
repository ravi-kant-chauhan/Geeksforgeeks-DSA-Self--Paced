#include<bits/stdc++.h>
using namespace std;


// Linear search   O(n)
int searchElement(vector<int> v, int x) {
    int n = v.size();

    for(int i= 0; i<=n; i++) {
        if(v[i] == x)
            return i;
    }
    return -1;
}


int main()
{
    vector<int> v = {3, 5, 64, 6};

    int x;
    cin>>x;

    cout<<searchElement(v, x)<<endl;
    return 0;
}