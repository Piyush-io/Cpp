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
        for(int i = 0; i < m; i++) {
            sort(matrix[i].begin(), matrix[i].end(), greater<>());
            for(int j = 0; j < n; j++) {
                int temp = matrix[i][j] * (j + 1);
                res = max(res, temp);
            }
        }
        return res;
    }
};
