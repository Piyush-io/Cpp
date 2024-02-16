//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(int S , vector<int> adj[] , vector<bool> &visited , vector<int> & recSt)
    {
        recSt[S] = 1;
        visited[S] = true;
        for(auto x : adj[S])
        {
            if(!visited[x] && recSt[x] == 0)
            {
                if(dfs(x , adj , visited , recSt) == true)
                    return true;
            }
            else if(recSt[x] == 1)
                return true;
        }
        recSt[S] = 0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V , false);
        vector<int> recSt(V , 0);
        for(int i = 0 ; i < V ; i++)
        {
            if(dfs(i , adj , visited , recSt) == true)return true;
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends