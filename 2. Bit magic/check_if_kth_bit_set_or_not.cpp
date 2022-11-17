#include<bits/stdc++.h>
using namespace std;

/*   Using Left Shift operator
1 -->    000...00001   (31 zeros)

void checkSet(int x, int n) {
    if((x & (1<<(n-1))) != 0) {
        cout<<"true";
    }
    else
        cout<<"false";
    return;
}


*/

/*  Using Right shift opertor

Shifting nth bit to 1 and do & with 1


*/

void checkSet(int x, int n) {
    if(x>>(n-1)& 1 == 1) {
        cout<<"true";
    }
    else
        cout<<"false";
    return;
}


int main() {
    int x, n;
    cin>>x>>n;
    
        
    checkSet(x, n);

    return 0;
}