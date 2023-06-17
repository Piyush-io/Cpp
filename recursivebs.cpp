#include <iostream>
using namespace std;

int recbs(int *arr, int si, int ei, int k)
{
    if (si > ei)
    {
        return -1; // base condition to check if the starting index becomes greater than ending index signifying element not present
    }

    int mid = (si + ei) / 2; // calculating mid
    if (arr[mid] == k)
    {
        return mid;
    }
    else if (arr[mid] > k)                 // if the mdi element is greater than required element
        return recbs(arr, si, mid - 1, k); // recuresive call with updating ending index by mid - 1
    else
        return recbs(arr, mid + 1, ei, k); // recuresive call with updating starting index by mid + 1
}

int main()
{

    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << recbs(arr, 0, n - 1, k) << endl;
}
