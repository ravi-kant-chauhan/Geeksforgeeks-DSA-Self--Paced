#include<bits/stdc++.h>
using namespace std;



void shortestPath(vector<int> adj[], int V, int s, int dist[]){
    bool visited[V];
    for(int i = 0; i<V; i++)
        visited[i] = false;
    
    queue<int> q;

    q.push(s);
    visited[s] = true;
    while(q.empty()==false) {
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(visited[v]==false){
                dist[v] = dist[u]+1;
                visited[v] = true;
                q.push(v);
            }
        }
    }

}

//  Time complexity = O(V+E)

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 2, 4);

    int dist[V];
    for(int i = 0; i<V; i++){
        dist[i] = INT_MAX;
    }
    dist[0] = 0;

    shortestPath(adj, V, 0, dist);

    for(int i = 0; i<V; i++)
        cout<<dist[i]<<" ";
    return 0;
}