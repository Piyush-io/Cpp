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

void quicksort(int *arr, int low, int high)
{
    if (low < high)
    {
        int p = hoare(arr, low, high);
        quicksort(arr, low, p);
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