#include<bits/stdc++.h>
using namespace std;


// Iterative solution

/*
int fact(int n) {
    int fact = 1;
    for(int i = n; i>0; i--){
        fact = fact*i;
    }
    return fact;
}

**   time complexity = Theta(n);
     Auxilary space requirement = O(1)
*/


// Recursive solution

int fact(int n) {
    if(n==1 || n==0)  return 1;

    return n * fact(n-1);
}
/* **  time complexity = Theta(n);
       Auxilary space requirement = Theta(n);

        Causes extra overhead -->  iterative approach is better
*/  

int main()
{
    int n;
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
}