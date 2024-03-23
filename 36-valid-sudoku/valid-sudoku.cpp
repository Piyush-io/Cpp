class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {   
        int rows = board.size();
        int cols = board[0].size();
        if(rows != 9 || cols != 9)
        {
            return false;
        }
        for(int i = 0 ; i < rows ; i++)
        {   
            unordered_set<char> r;
            for(int j = 0 ; j < cols ; j++)
            {   
                if(board[i][j] == '.')
                    continue;
                if(r.find(board[i][j]) != r.end())
                {
                    return false;
                }
                else
                {
                    r.insert(board[i][j]);
                }
            }
        }
        for(int i = 0 ; i < cols ; i++)
        {   
            unordered_set<char> r;
            for(int j = 0 ; j < rows ; j++)
            {
                if(board[j][i] == '.')
                    continue;
                if(r.find(board[j][i]) != r.end())
                {
                    return false;
                }
                else
                {
                    r.insert(board[j][i]);
                }
            }
        }
         for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                unordered_set<char> subgridSet;
                for (int x = 3 * i; x < 3 * (i + 1); x++) {
                    for (int y = 3 * j; y < 3 * (j + 1); y++) {
                        if (board[x][y] == '.')
                            continue;
                        if (subgridSet.find(board[x][y]) != subgridSet.end())
                            return false;
                        else
                            subgridSet.insert(board[x][y]);
                    }
                }
            }
        }
        return true;
    }
};