#include<bits/stdc++.h>
using namespace std;



/*          Naive Aproach


bool checkPalindrome(string str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev==str);
}

Time Complexity = Theta(n)
Aux Space = Theta(n)

*/


bool checkPalindrome(string str){
    int start = 0;
    int end = str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Time Complexity = O(n)
// Aux Space = O(1)


int main()
{
    string str = "abcba";
    
    cout<<checkPalindrome(str);
    return 0;
}