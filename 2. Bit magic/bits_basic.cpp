#include<bits/stdc++.h>
using namespace std;

/*

& ->  1 if both are 1
| ->  1 if either is 1
^ ->  1 if both are opposite


Left shift operator  :  x<<y  is equivalent to x*2^y
Right shift operator  :  x>>y  is equivalent to floor of x/2^y

Bitwise operator :   ~   reverses the bits 


2's complement of x in n bits representation   =    2^n - x



*/

int main()
{
    unsigned int x = 1;    //  2^32
    cout<<(~x)<<endl;   // output -> 4294967294     ,  largest unsigned -> 4294967295
    return 0;
}