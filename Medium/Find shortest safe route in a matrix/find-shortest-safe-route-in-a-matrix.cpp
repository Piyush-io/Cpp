//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int findShortestPath(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) {
                    mat[i][j] = -1;
                    for (int k = 0; k < 4; k++) {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if (x >= 0 && x < rows && y >= 0 && y < cols && mat[x][y] == 1) {
                            mat[x][y] = -1;
                        }
                    }
                }
            }
        }
        queue<pair<pair<int, int>, int>> bfs;
        for (int i = 0; i < rows; i++) {
            if (mat[i][0] == 1) {
                bfs.push({{i, 0}, 0});
                mat[i][0] = -1;
            }
        }
        while (!bfs.empty()) {
            auto cell = bfs.front();
            bfs.pop();
            int row = cell.first.first;
            int col = cell.first.second;
            int dist = cell.second;
            if (col == cols - 1) {
                return dist+1;
            }
            for (int k = 0; k < 4; k++) {
                int x = row + dx[k];
                int y = col + dy[k];
                if (x >= 0 && x < rows && y >= 0 && y < cols && mat[x][y] == 1) {
                    bfs.push({{x, y}, dist + 1});
                    mat[x][y] = -1;
                }
            }
        }

        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends