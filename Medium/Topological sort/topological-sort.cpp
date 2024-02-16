//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> indegree(V,0);
	    queue<int> zeroInDegree;
	    for(int i = 0; i < V ; i++)
	    {
	        for(auto x : adj[i])
	        {
	            indegree[x]++;
	        }
	    }
	    for(int i = 0 ; i < indegree.size() ; i++)
	    {
	        if(indegree[i] == 0)
	        {
	            zeroInDegree.push(i);
	        }
	    }
	    vector<int> ans;
	    while(!zeroInDegree.empty())
	    {
	        int size = zeroInDegree.size();
	        for(int i = 0; i < size ; i++)
	        {
	            int temp = zeroInDegree.front();
	            zeroInDegree.pop();
	            ans.push_back(temp);
	            for(auto x : adj[temp])
	            {
	                indegree[x]--;
	                if(indegree[x] == 0)
	                    zeroInDegree.push(x);
	            }
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends