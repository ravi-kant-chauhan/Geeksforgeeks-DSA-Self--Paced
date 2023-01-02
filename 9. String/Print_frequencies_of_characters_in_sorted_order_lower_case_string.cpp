#include<bits/stdc++.h>
using namespace std;


//  Since all are lower case their ASCII values are contiguous


int main()
{
    string str = "geeksforgeekseee";
    int count[26] = {0};

    for(int i = 0; i<str.length(); i++)
        count[str[i]-'a']++;

    for(int i = 0; i<26; i++)
        if(count[i]>0)
            cout<<char(i+'a')<<" "<<count[i]<<endl;

    return 0;
}