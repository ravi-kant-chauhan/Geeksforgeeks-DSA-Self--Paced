#include<bits/stdc++.h>
using namespace std;

//Time complexity = Theta(n)
// Recurrence Relation - T(n) = T(n-1) + Theta(n)
// Auxilary space = Theta(n)

void func(int n) {
    if(n==0) return;
    cout<<n<<" ";
    func(n-1);
}

int main()
{
    int n;
    cin>>n;

    func(n);
    return 0;
}