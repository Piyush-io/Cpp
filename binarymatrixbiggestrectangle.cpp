#include <iostream>
#include <stack>
using namespace std;

int getMaxArea(int arr[], int n)
{
    stack<int> s;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            int ht = arr[s.top()];
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            res = max(res, ht * width);
        }
        s.push(i);
    }

    while (!s.empty())
    {
        int ht = arr[s.top()];
        s.pop();
        int width = s.empty() ? n : n - s.top() - 1;
        res = max(res, ht * width);
    }

    return res;
}

int maxRectangle(int A[][4])
{
    int result = getMaxArea(A[0], 4);
    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (A[i][j])
            {
                A[i][j] += A[i - 1][j];
            }
        }
        result = max(result, getMaxArea(A[i], 4));
    }

    return result;
}

int main()
{
    int A[][4] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0},
    };

    cout << "Area of maximum rectangle is "
         << maxRectangle(A);

    return 0;
}