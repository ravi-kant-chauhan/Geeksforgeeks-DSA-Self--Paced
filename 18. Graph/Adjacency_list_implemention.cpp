#include<bits/stdc++.h>
using namespace std;


/* Operations on Adjacency List implementation

Check if u and v are adjacent      : O(v)
Find all vertices adjacent to u     : Theta(u)   u-> degree of the vertex
Find degree of u                : Theta(v)
Add an Edge              : Theta(1)
Remove an Edge          : O(v)

*/

// Using array of vectors

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for(int i = 0; i<V; i++)
    {
        cout<<i<<" : ";
        for(int x : adj[i])
            cout<<x<<" ";
        cout<<"\n";
    }
}


int main()
{
    int V = 4;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);


    printGraph(adj, V);
    return 0;
}

// Can also be created using vectors of vectors