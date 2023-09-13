#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 3

void multiply(int matrix[ROWS][COLS])
{
    vector<vector<int> > sum;
    for (int i = 0; i < ROWS; i++)
    {
        vector<int> row;
        for (int j = 0; j < COLS; j++)
        {
            int mul = 0;
            for (int k = 0; k < ROWS; k++)
            {
                mul += (matrix[i][k] * matrix[k][j]);
            }
            row.push_back(mul);
        }
        sum.push_back(row);
    }

    for (int i = 0; i < sum.size(); i++)
    {
        for (int j = 0; j < sum[0].size(); j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int sparse[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    multiply(sparse);
}