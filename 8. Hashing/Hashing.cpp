/*
//      Hashing

strict search, insert and delete ->    O(1)

Not useful for:
Finding closest value     -->  AVL Tree or
Sorted Data               -->  Red Black Tree  
Prefix Searching    ->   Trie



Applications  :

1. Dictionaries
2. Database Indexing
3. Cryptography
4. Caches
5. Symbol Tables in Compilers/Interpreters
6. Routers
7. Getting data from databases

*/

/*
//  Direct address table
-> usign array to do search, insert and delete for 1000 or slightly more
But it cannot be used to store large numbers as index  ->  like Phone no. , decimal values

Hashing can be used for universe of keys

//  Hash Function
 To convert large keys to small values to be used in direct address table called hash table


-->  Should always map a large key to same small key
-->  Should generate values from 0 to n-1
-->  Should be fast, O(1) for integers and O(len) for string of length "len"
-->  Should uniformly distribute large keys into hash table slots


Hash table size is proportional to no. of keys

Example Hash Funcions
1.  h(large_key)  = large_key % m   ->  m usually prime no.
2.  For strings,  weighted sum
    str[] = "abcd"
   str[0] * x^0  + str[1] * x&1 + str[2] * x^2
3.  Universal Hashing




// Collision

Two keys mapping to same hash key

If we know keys in advance, then we can perfect hashing

If we do not know keys in advance, then we use one of the following
        1. Chaining
        2. Open Addressing
            a.  Linear Probing
            b.  Quadratic Probing
            c.  Double Hashing



*/