//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int minStepToReachTarget(vector<int>&s,vector<int>&t,int n)
    {
        vector<vector<int>>vis(n+1 ,vector<int>(n+1,false));
        queue<pair<int ,pair<int,int>>>q;
        int dx[] = {-2 ,-2 ,-1 ,-1, 1, 1, 2, 2 };
        int dy[] = {-1 , 1 ,-2, 2 ,-2, 2, -1, 1};
        q.push({0,{s[0],s[1]}}); vis[s[0]][s[1]] = true;
        while(!q.empty())
        {
            int d = q.front().first;
            int i = q.front().second.first;
            int j = q.front().second.second;  q.pop();
            if(i==t[0] and j==t[1]) return d;
            for(int k =0; k<8; k++){
                int nr = dx[k] + i;
                int nc=  dy[k] + j;
                if(nr>=1 and nc>=1 and nr<=n and nc<=n and !vis[nr][nc]){
                    q.push({d+1,{nr,nc}});
                    vis[nr][nc] = true;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends