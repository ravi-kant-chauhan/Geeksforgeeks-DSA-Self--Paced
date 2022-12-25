#include<bits/stdc++.h>
using namespace std;

// theta(n) 
// t(n) = t(n-1) + theta(n)
// aux space = Theta(n)

int sum(int n) {
    if(n==0) return 0;
    return n + sum(n-1);

//    return n*(n+1)/2;
}

int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
}