#include <iostream>
using namespace std;

int mini_diff(int *arr, int n)
{
    sort(arr, arr + n);
    int diff = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        diff = min(arr[i + 1] - arr[i], diff);
    }
    return diff;
}
int main()
{
    int arr[] = {87, 78, 16, 94};
    int n = 4;
    cout << mini_diff(arr, n);
}