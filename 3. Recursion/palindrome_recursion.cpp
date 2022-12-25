#include<bits/stdc++.h>
using namespace std;


// O(n)
// T(n) = T(n-2) + Theta(n)
// Aux space = Theta(n)

bool isPalindrome(string &s, int start, int end) {
    if(start>=end) return true;

    return (s[start] == s[end]) && isPalindrome(s, start+1, end-1);
}

int main()
{
    string s;
    cin>>s;
    int start = 0;
    int end = s.size()-1;

    cout<<isPalindrome(s, start, end)<<endl;
    return 0;
}