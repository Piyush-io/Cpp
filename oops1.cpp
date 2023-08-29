#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 3

void add(int a1[][3], int a2[][3])
{
    int matrix[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = a1[i][j] + a2[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void subtract(int a1[][3], int a2[][3])
{
    int matrix[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = a1[i][j] - a2[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void divide(int a1[][3], int a2[][3])
{
    int matrix[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = (a1[i][j]) / (a2[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[ROWS][COLS] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    int matrix2[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "WELCOME TO MATRIX CALCULATOR" << endl;
    cout << "1. ADD MATRIX" << endl;
    cout << "2. SUBTRACT MATRIX" << endl;
    cout << "3. DIVIDE MATRIX" << endl;
    cout << "4. MULTIPLY MATRIX" << endl;
    char c;
    cout << "Enter your choice: " << endl;
    cin >> c;
    switch (c)
    {
    case '1':
        add(matrix, matrix2);
        break;
    case '2':
        subtract(matrix, matrix2);
    case '3':
        divide(matrix, matrix2);
        break;
    /*
    case '4':
        mutiply(matrix, matrix2);*/
    default:
        break;
    }
}