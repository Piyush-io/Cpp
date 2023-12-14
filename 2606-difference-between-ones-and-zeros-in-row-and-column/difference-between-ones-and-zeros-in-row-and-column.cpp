class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {   
        int rows = grid.size();
        int cols = grid[0].size();
        vector<int> onesinRowi(rows);
        vector<int> onesincolj(cols);
        vector<vector<int>> res(rows,vector<int>(cols));
        for(int i = 0 ; i < rows ; i++)
        {   
            int count1s = 0;
            for(int j = 0 ; j < cols ; j++)
            {
                if(grid[i][j] == 1)
                    count1s++;
            }
            onesinRowi[i] = count1s;
        }
        for(int i = 0 ; i < cols ; i++)
        {   
            int count1s = 0;
            for(int j = 0 ; j < rows ; j++)
            {
                if(grid[j][i] == 1)
                    count1s++;
            }
            onesincolj[i] = count1s;
        }

        for(int i = 0 ; i < rows ; i++)
        {   
            int count1s = 0;
            for(int j = 0 ; j < cols ; j++)
            {
                res[i][j] = onesinRowi[i] + onesincolj[j] - (cols-onesinRowi[i]) - (rows-onesincolj[j]);
            }
        }

        return res;
    }
};