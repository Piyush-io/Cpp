#include <iostream>
using namespace std;

int hoare(int *arr, int low, int high)
{
    int pivot = arr[low]; // in hoare we take first element as the pivot
    int i = low - 1;
    int j = high + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j; // j will be the index where after the completion of the function all elements smaller than equal to pivot will come left to it and greater and equal right of it
        }
        swap(arr[i], arr[j]);
    }
    return low;
}

int kthesmallestelement(int *arr, int n, int k)
{
    /*̣    sort(arr, arr + n);
        return arr[k-1]; */

    int low = 0;
    int high = n - 1;
    int pivot;
    while (low <= high)
    {
        pivot = hoare(arr, low, high);
        if (pivot == k-1)
        {
            return pivot;
        }
        else if(pivot > k-1)
        {
            high = pivot-1;
        }
        else
            low = pivot+1;
    }
    return -1;
}

int main()
{
    int arr[] = {87, 78, 16, 94};
    int n = 4;
    int k;
    cin >> k;
    cout << arr[kthesmallestelement(arr, n, k)];
}