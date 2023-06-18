#include <iostream>
using namespace std;

int firstocc(int *arr, int i, int l, int k, int n)
{
    while (i <= l)
    {
        int mid = (i + l) / 2;

        if (mid == 0 && arr[mid] == k || (arr[mid] == k && arr[mid] != arr[mid - 1]))
        {
            return mid;
            break;
        }

        else if (arr[mid] > k)
        {
            l = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return -1;
}

int lastocc(int *arr, int i, int l, int k, int n)
{
    while (i <= l)
    {
        int mid = (i + l) / 2;

        if ((mid == n - 1 && arr[mid] == k) || (arr[mid] == k && arr[mid] != arr[mid] + 1))
        {
            return mid;
            break;
        }

        else if (arr[mid] > k)
        {
            l = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int n = 7;
    int k;
    cin >> k;
    int i = firstocc(arr, 0, n - 1, k, n);
    int j = lastocc(arr, 0, n - 1, k, n);
    int count = j - i + 1;
    cout << count;
}