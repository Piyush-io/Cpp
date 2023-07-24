#include <iostream>
using namespace std;

void distribute(int *arr, int n, int k)
{
    sort(arr, arr + n);
    int res = arr[k - 1] - arr[0];
    int diff = 0;
    int resultant_index = 0;
    for (int i = 1; (i + k - 1) < n; i++)
    {
        res = min(res, arr[i + k - 1] - arr[i]);
    }
    cout << res << endl;
}

int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int k;
    cin >> k;
    distribute(arr, 7, k);
}