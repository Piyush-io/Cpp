#include <iostream>
using namespace std;

void partition_func(int *arr, int low, int ind, int high)
{
    int n = high - low + 1;
    int index = 0;
    int temp[n];
    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= arr[ind])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        if (arr[i] > arr[ind])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {3, 8, 6, 12, 10, 7};
    partition_func(arr, 0, 5, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}