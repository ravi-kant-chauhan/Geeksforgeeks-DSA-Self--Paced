#include<bits/stdc++.h>
using namespace std;

/*   Open Addressing

   ** Using Singly array only

No. of slots in Hash table >=  No. of keys to be inserted

1.   Using Linear Probing

->  If collision happens linearly search for next empty slot

    hash(key, i) = (h(key) + i) % m

Advantage over Chaining
    * Cache Friendly


Disadvantage
    * Clustering on collision

***** Handling Clustering *****

2. Quadratic Probing
    hash(key, i) = (h(key) + i^2) % m

    Disadvantage
        Secondary Clustering
        Chance of not find empty slots
            Sol:
                1.  alpha < 0.5
                2.  m is prime

3. Double Hashing
    hash(key, i) = (h1(key) + i * h2(key)) % m

        # If h2(key) is relatively prime to m, then it always find a free slot if there is one
        # Distributes keys more uniformly than linear and quadratic probing   
        # No clustering

*/

int main()
{
    
    return 0;
}