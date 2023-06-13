#include <iostream>
using namespace std;

int subsum(int *arr, int n, int k)
{
    int sum = 0;
    int res = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
        for(int j = i+1 ; j < n ; j++)
        {
            sum += arr[j];
            res = max(res,sum);
        }
    }
    return res;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = subsum(arr, n, k);
    cout << sum << endl;
}