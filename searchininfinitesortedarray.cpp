#include <iostream>
using namespace std;

int bs(int *arr, int si, int ei, int k)
{
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

int searchininfinite(int *arr, int n, int k)
{
    int si = 0;
    int ei = 1;
    while (k > arr[ei])
    {
        int temp = ei + 1; // this is my new start
        // double the box value
        // end = previous end + sizeofbox*2
        ei = ei + (ei - si + 1) * 2;
        si = temp;
    }
    return bs(arr, si, ei, k);
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
    cout << searchininfinite(arr, n, k) << endl;
}