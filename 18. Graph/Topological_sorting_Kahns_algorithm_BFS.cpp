#include<bits/stdc++.h>
using namespace std;

/*   DAG

BFS based solution :

1. Store indegree of every vertex
2. Create a Queue, q
3. Add all 0 indegree to the q
4. while(q is not empty)
   {
        a. u = q.pop()
        b. Print u
        c. For every adjacent v of u
                i). Reduce indegree of v by 1
                ii). If indegree of v becomes 0, add v to the q
   } 


Time complexity = O(V+E)
*/

void topologicalSort(vector<int> adj[], int V)
{
    vector<int> in_degree(V, 0);

    for(int u = 0; u<V; u++) {
        for(int x : adj[u])
            in_degree[x]++;
    }

    queue<int> q;
    for(int i=0; i<V; i++)
        if(in_degree[i]==0)
            q.push(i);

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout<<u<<" ";

        for(int x : adj[u])
            if(--in_degree[x]==0)
                q.push(x);
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main()
{
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  
  
    cout << "Following is a Topological Sort of\n"; 
    topologicalSort(adj,V);

    return 0;
}