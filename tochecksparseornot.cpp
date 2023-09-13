#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 3

bool sparseornot(int matrix[ROWS][COLS])
{
    int elements = ROWS * COLS;
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

    if (non_zero < elements / 2)
    {
        return true;
    }

    return false;
}

int main()
{
    int sparse[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    cout << "Is the matrix sparse : " << sparseornot(sparse) ;
}