//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) 
    {   
        int res = 0;
        int row = grid.size();
	    int col = grid[0].size();
	    queue<pair<int,int>> q;
	    vector<vector<int>> use(row,vector<int>(col,-1));
	    for(int i=0;i<row;i++)
	    {
	        for(int j=0;j<col;j++)
	        {
	            if(grid[i][j]==2) 
	            {
	                q.push({i,j});
	                use[i][j]=0;
	            }
	            if(grid[i][j]==1)
	            {
	                use[i][j] = -1;
	            }
	            if(grid[i][j]== 0)
	            {
	                use[i][j] =-2;
	            }
	        }
	    }
	    int dx[] = {0, 0, 1, -1};
	    int dy[] = {1, -1, 0 , 0};
	    int level=0;
	    while(!q.empty())
	    {
	        int size = q.size();
	        for(int i=0;i<size;i++) {
	            int a = q.front().first;
	            int b = q.front().second;
	            q.pop();
	            
	            for(int k=0;k<4;k++)
	            {
	                int na = a+dx[k];
	                int nb = b+dy[k];
	                if(na<0||nb<0||na>=row||nb>=col||use[na][nb]!=-1) continue;
	                q.push({na,nb});
	                use[na][nb]=use[a][b]+1;
	            }
	        }
	        
	    }
	    
	    for (int i = 0; i < row; i++)
	    {
            for (int j = 0; j < col; j++) 
            {
                if (use[i][j] == -1) 
                {
                    return -1;
                }
                res = max(res, use[i][j]);
            }
        }
	    
	    return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends