#include<bits/stdc++.h>
using namespace std;


bool isPal(int n) {
    int rev = 0;
    int temp = n;
    while(temp!=0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    return (rev == n);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<isPal(n)<<endl;
    // if(rev == n) cout<<"yes"<<endl;
    // else cout<<"no"<<endl;

    return 0;
}