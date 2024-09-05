class Solution {
public:
    // Alice -> 0
    // Bob -> 1
    int dp[101][101][2]; 

    int helper(vector<int> &piles, bool turn, int i, int m) {   
        int n = piles.size();
        if (i == n) {
            return 0;
        }
        if (dp[i][m][turn] != -1) {
            return dp[i][m][turn];
        }
        
        int res = (turn == 1) ? INT_MAX : INT_MIN;
        int score = 0;
        
        for (int x = 1; x <= min(2 * m, n - i); x++) {
            score += piles[i + x - 1];
            if (turn == 0) {
                res = max(res, score + helper(piles, 1, i + x, max(m, x)));
            } else {
                res = min(res, helper(piles, 0, i + x, max(m, x)));
            }
        }
        
        return dp[i][m][turn] = res;
    }

    int stoneGameII(vector<int>& piles) 
    {   
        memset(dp, -1, sizeof(dp));
        return helper(piles , 0 , 0 , 1);
    }
};