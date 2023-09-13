#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 3

// write a program to implement sparse matrix using linked lists

// what is the relation between sparcity and the density of the matrix?
// what is the purpose and the limitations of the sparse matrix?
// Is sparse matrix faster?

void compactit(int matrix[ROWS][COLS])
{
    int non_zero = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] != 0)
            {
                non_zero++;
            }
        }
    }
    int row = 0;
    int col = 0;
    int compact[3][non_zero];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] != 0)
            {
                compact[row][col] = i;
                compact[row + 1][col] = j;
                compact[row + 2][col] = matrix[i][j];

                col++;
            }
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << compact[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int sparse[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    compactit(sparse);
}