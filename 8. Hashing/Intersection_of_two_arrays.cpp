#include<bits/stdc++.h>
using namespace std;

//    Count No. of distinct common elements in intersection of the two arrays

/*  Naive Approach


int countDistinct(int a[], int b[], int m, int n){
    int count = 0;
    for(int i= 0; i<m; i++){
        bool flag = false;
        for(int j = 0; j<i; j++){
            if(a[i]==a[j]){
                flag = true;
                break;
            }
        } 
        if(flag==true)
            continue;
        for(int j= 0; j<n; j++){
            if(b[j]==a[i]){
                count++;
                break;
            }
        }
    }
    return count;
}


Time Complexity = O(m*(n+m))
Aux = O(1)
*/


/*   Efficient Approach

1. Insert all elements of a[] in a set
    s.a                                                 ->  Theta(m)
2. Insert all elements of b[] in another set
    s.b                                                 ->  Theta(n)
3. Now traverse through s.a  and increment count for elements that are
    present in s.b                              
                            ->  O(m)

    O(m+n)
*/



//  Most Efficient

/*
    1. Insert all elements of a[] in a set
        s.a                                     ->  Theta(m)
    2. Traverse through b[].   Search from every element b[i] in s.a. 
        If present :                            ->  Theta(n)
            a.  Increment ans
            b.  Remove b[i] from s.a

Time Complexity = Theta(m+n)
Aux Space = O(m)
*/

int countDistinct(int a[], int b[], int m, int n)
{
    int ans = 0;
    unordered_set<int> s(a, a+m);
    for(int i = 0; i<n; i++){
        if(s.find(b[i])!=s.end()){
            ans++;
            s.erase(s.find(b[i]));
        }
    }
    return ans;
}


int main()
{
    int a[] = {10, 20, 10, 30, 20, 40};
    int b[] = {20, 10, 10, 40};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);

    cout<<countDistinct(a, b, n1, n2);
    return 0;
}