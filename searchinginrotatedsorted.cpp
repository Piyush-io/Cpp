#include <iostream>
using namespace std;

int searchinrotatedsorted(int *arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = low + (high-low) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] >= arr[low])
        {
            if (k >= arr[low] && k < arr[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else
        {
            if (k > arr[mid] && k <= arr[high])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << searchinrotatedsorted(arr, n, k) << endl;
}