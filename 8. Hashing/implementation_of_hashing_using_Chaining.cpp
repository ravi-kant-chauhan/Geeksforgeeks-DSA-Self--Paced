#include<bits/stdc++.h>
using namespace std;

/*     Chaining
Keys
Hash table (Array of Linked list Headers)

 Performance
    m = No. of slots in Hash table
    n = No. of keys to be inserted
    Load Factor  alpha = n/m     ->  the smaller, the better

    Expected chain length = alpha
    Expected time to search = O(1+alpha)
    Expected time to insert/delete = O(1+alpha)

    ** All under the assumption that there is uniform distribution of keys in
        hash table by hash function

Data Structures for Storing Chains

1.  Linked List
        Search, Delete, Insert ->  O(l)
        (Not cache friendly,  also uses extra space for next references/pointers)

2.  Dynamic Sized Arrays (Vector in C++, Arraylist in Java, List in Python)
        Same
        (Cache Friendly)

3.  Self Balancing BST  (AVL Tree, Red Black Tree)
        O(log(l))  ->  for all
        (Not cache Friendly)

*/


struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b) {
        BUCKET = b;
        table = new list<int> [b];
    }
    void insert(int key) {
        int i = key% BUCKET;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i = key % BUCKET;
        for (auto x : table[i])
           if (x == key)
              return true;
        return false;      
    }
    void remove(int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }
};


int main()
{
    MyHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
	mh.insert(7);
    cout << mh.search(10) << endl;
	mh.remove(15);
	cout << mh.search(15);
    return 0;
}