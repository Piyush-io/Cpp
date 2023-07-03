#include <iostream>
using namespace std;

bool feasable(int *arr, int n, int k, int pans)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pans < arr[i])
        {
            return false;
        }
        else if (sum + arr[i] > pans)
        {
            count++;
            sum = arr[i];
            if (count > k)
                return false;
        }
        else
        {
            sum += arr[i];
        }
    }
    if (count == k)
    {
        return true;
    }
}

int minPages(int *arr, int n, int k)
{
    if (n < k)
    {
        return -1;
    }

    int high = 0;
    int low = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        high += arr[i];
        low = max(arr[i], low);
    }
    int res = -1;
    while (low <= high)
    {
        int possibleans = (low + high) / 2;
        if (feasable(arr, n, k, possibleans))
        {
            res = possibleans;
            high = possibleans - 1;
        }
        else
        {
            low = possibleans + 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << minPages(arr, n, k);
}