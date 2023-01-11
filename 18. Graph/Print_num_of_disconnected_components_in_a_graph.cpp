#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], bool visited[], int s){
    queue<int> q;
    q.push(s);
    while(q.empty()==false)
    {
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(visited[v]==false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int BFSDin(vector<int> adj[], int V){
    bool visited[V];
    for(int i=0; i<V; i++)
        visited[i] = false;
    
    int count = 0;

    for(int i=0; i<V; i++){
        if(visited[i]==false){
            visited[i] = true;
            BFS(adj, visited, i);
            count++;
        }
    }
    return count;
}

int main()
{
    int V=9;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);
    addEdge(adj, 7, 8);

	cout << "Number of islands: "<<BFSDin(adj,V); 

    return 0;
}