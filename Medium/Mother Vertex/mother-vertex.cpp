//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    void DFS(vector<int> adj[], int v, bool visited[])
    {
        visited[v] = true;
        for (int u : adj[v])
        {
            if (!visited[u])
                DFS(adj, u, visited);
        }
    }

    int findMotherVertex(int V, vector<int> adj[])
    {
        bool visited[V];
        fill(visited, visited + V, false);
        int lastFinished = 0;
        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                DFS(adj, i, visited);
                lastFinished = i;
            }
        }
        fill(visited, visited + V, false);
        DFS(adj, lastFinished, visited);
        for (bool visit : visited)
        {
            if (!visit)
                return -1;
        }
        return lastFinished;
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends