#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using namespace std::chrono;

int lomuto(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(int *arr, int low, int high)
{
    if (low < high)
    {
        int p = lomuto(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main()
{

    int arr[] = {3, 8, 6, 12, 10, 7};
    quicksort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}