#include<bits/stdc++.h>
using namespace std;


// Time complexity = Theta(n)
// Recurrence  T(n) = T(n-1) + Theta(n)
// Auxilary space = O(n)
void func(int n) {
    if(n==0) return;
    func(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;

    func(n);
    return 0;
}