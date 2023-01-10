#include<bits/stdc++.h>
using namespace std;


/*                          
//          Default    ->>  Max Heap

int main()
{
    priority_queue <int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<" ";
    cout<<pq.top()<<" ";
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
*/


//      ********************************************************************


/*              
//          Modified    ->    ** Min Heap **

// int main()
// {
//     priority_queue <int, vector<int>, greater<int>> pq;
//     pq.push(10);
//     pq.push(15);
//     pq.push(5);
//     cout<<pq.size()<<" ";
//     cout<<pq.top()<<" ";
//     while(pq.empty()==false){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
//     return 0;
// }

*/

//      *********************************************************************

//  Priority Queue using existing vector / array

int main()
{
    int arr[] = {10, 5, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq(arr, arr+3);
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    //  Modified to work as Min Heap

    for(int i=0; i<n; i++){
        arr[i] = -arr[i];
    }
    priority_queue<int> revpq(arr, arr+3);
    while(revpq.empty()==false){
        cout<<-revpq.top()<<" ";
        revpq.pop();
    }

}