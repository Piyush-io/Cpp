#pragma GCC optimize("Ofast","inline","fast-math","unroll-loops","no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native","f16c")
static const auto fast = []() {ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); return 0; } ();
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();  // NO OF ROWS
        int n = matrix[0].size();   // NO OF COLUMNS
        
        for(int i = 0 ; i < n ; i++) {
            for(int j = 1 ; j < m ; j++) {
                if(matrix[j][i] != 0)
                    matrix[j][i] += matrix[j-1][i];
            }
        }

        int res = INT_MIN;
        for(int i = 0; i < m; i++) 
        {
            sort(matrix[i].begin(), matrix[i].end(), greater<>());
            for(int j = 0; j < n; j++) 
            {
                int temp = matrix[i][j] * (j + 1);
                res = max(res, temp);
            }
        }
        return res;
    }
};
