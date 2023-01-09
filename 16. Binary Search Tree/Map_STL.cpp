#include<bits/stdc++.h>
using namespace std;

/*
//     Use of insert(),  operator[], at(), size()

int main()
{
    map<int, int> m;
    m.insert({10, 200});
    m[5] = 100;
    m.insert({3, 300});

    m.at(10) = 1000;        // Only for element which are already present
    for(auto &x: m)
        cout<<x.first<<" "<<x.second<<endl;
    
    cout<<"Size: "<<m.size()<<endl;

    return 0;
}

*/


/*
//   Use of begin(), end(), clear(), empty()

int main() {
    map<int, int> m;
    m.insert({10, 200});
    m[5] = 100;
    m.insert({3, 300});

    for(auto it= m.begin(); it!= m.end(); it++)
            cout<<(*it).first<<" "<<(*it).second<<endl;
        
    cout<<"Size: "<<m.size()<<endl;
    m.clear();
    cout<<"Size: "<<m.size()<<endl;
    cout<<"Empty: "<<(m.empty()?"Yes":"No")<<endl;

    return 0;
}

*/


/*
//      Use of find(), count(), lower_bound()


int main()
{
    map<int, string> m;
    m.insert({5, "gfg"});
    m.insert({2, "ide"});
    m.insert({1, "practice"});

    if(m.find(5)==m.end())
        cout<<"Not found";
    else
        cout<<"Found";
    cout<<endl;

    if(m.count(2)==0)
        cout<<"Not Found";
    else
        cout<<"Found";
    cout<<endl;

    auto it = m.lower_bound(3);
    if(it!=m.end())
        cout<<(*it).first<<" ";
    else
        cout<<"No Equal or Greater Value";
}

*/


// Use of upper_bound(), erase()

int main()
{
    map<int, string> m;
    m.insert({8, "gfg"});
    m.insert({7, "gfgd"});
    m.insert({6, "gfdg"});
    m.insert({2, "ide"});
    m.insert({1, "practice"});

    auto it = m.upper_bound(5);
    if(it!=m.end())
        cout<<(*it).first<<endl;
    else
        cout<<"No greater Value"<<endl;
    
    m.erase(5);
    cout<<"Size: "<<m.size()<<endl;

    m.erase(m.find(2), m.end());
    cout<<"Size: "<<m.size()<<endl;

    return 0;
}