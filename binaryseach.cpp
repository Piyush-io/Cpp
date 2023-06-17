#include <iostream>
using namespace std;

int bs(int *arr, int n, int k)
{
    int si = 0;
    int ei = n - 1;
    while (si <= ei)
    {
        int mid = (si + ei) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            ei = mid - 1;
        else
            si = mid + 1;
    }
    return -1;
}

int main()
{

    int n,k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << bs(arr, n, k) << endl;
}
