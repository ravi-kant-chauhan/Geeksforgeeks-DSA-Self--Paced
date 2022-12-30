#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
};

bool myComp(Point p1, Point p2)
{
    return (p1.y < p2.y);
}

int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, myComp);

    for(auto i: arr)
        cout<<i.x<<" "<<i.y<<endl;
    return 0;
}


// Sorts in increasing order of x or y as per our choice