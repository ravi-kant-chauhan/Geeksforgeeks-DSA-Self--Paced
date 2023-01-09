#include<bits/stdc++.h>
using namespace std;

/*
//  Use of insert(), begin(), end()
//  iterator it



int main()
{
    set<int> s;  //  Stores in sorted increasing order
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(int x : s) {
        cout<<x<<" "; //  Prints sorted order
    }
    cout<<endl;

    set<int, greater<int>> s1;   // Stores in decreasing order
    s1.insert(10);
    s1.insert(5);
    s1.insert(20);
    for(auto it = s1.begin(); it!=s1.end(); it++) {
        cout<<(*it)<<" ";
    }cout<<endl;

    return 0;
}

*/



/*
//    Use of rbegin(), rend(), find(), clear()


int main() {
    set<int, greater<int>> s;  // Storing in decreasing order
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(auto it = s.rbegin(); it!=s.rend(); it++){  // Prints in reverse order
        cout<<(*it)<<" ";
    }cout<<endl;

    auto it = s.find(10);  // return iterator to the value
    if(it==s.end())             // s.end() -> iterator beyond the last element
        cout<<"Not Found"<<endl;
    else
        cout<<"Found"<<endl;
    
    cout<<"Size: "<<s.size()<<endl;
    s.clear();
    cout<<"Size: "<<s.size()<<endl;
}

*/


/*
//   Use of count(), erase()

int main() {
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(7);

    if(s.count(10))         // counts no. of occurences
        cout<<"Found"<<endl;        // as only unique values are stored it will be either 0 or 1
    else
        cout<<"Not found"<<endl;
                        //  Can work as find function
    
    s.erase(5);         // Removes the element
    for(int x: s){
        cout<<x<<" ";
    }cout<<endl;

    auto it = s.find(7);
    s.erase(it);            //  Deletes element corresponding to the iterator
    for(int x: s){
        cout<<x<<" ";
    }cout<<endl;

    return 0;
}

*/



//  Use of lower_bound() and upper_bound()
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);

    auto it = s.lower_bound(5);  //  Stores the element if present else just next element
    if(it!=s.end())
        cout<<(*it)<<endl;
    else
        cout<<"Given element is greater than the largest number"<<endl;

    it = s.upper_bound(5);      //   Stores an element just next to the given element
    if(it!=s.end())
        cout<<(*it)<<endl;
    else
        cout<<"Given element if greater than the largest number"<<endl;

    return 0;
}
