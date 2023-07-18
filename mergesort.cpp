#include <iostream>
using namespace std;

void mergearray(int *arr, int low, int mid, int high)
{
    // we start by creating a set of arrays
    int N = mid - low + 1; // first array of size low to mid (first sorted array)
    int n = high - mid;    // second array of size mid+1 to high (second sorted array)
    int a1[N];
    int a2[n];
    // copying the elements of the first sorted part of the original array to the first created array
    for (int i = 0; i < N; i++)
    {
        a1[i] = arr[low + i];
    }
    // copying the second sorted part to the second created array
    int z = mid + 1;
    for (int i = 0; i < n; i++)
    {
        a2[i] = arr[mid + 1 + i];
    }
    // then we simply use merge two sorted arrays logic to modify the original array according to the order
    int i = 0;
    int j = 0;
    int k = low;
    while (i < N && j < n)
    {
        if (a1[i] <= a2[j])
        {
            arr[k++] = a1[i];
            i++;
        }

        else
        {
            arr[k++] = a2[j];
            j++;
        }
    }
    while (i < N)
    {
        arr[k++] = a1[i];
        i++;
    }
    while (j < n)
    {
        arr[k++] = a2[j];
        j++;
    }
}

void merge_sort(int *arr, int low, int high)
{
    if (high <= low) // at least two elements should be there consider it a base case when only one element is left after recursive division of the array
        return;
    int mid = low + (high - low) / 2; // calculating mid to divid the array from the theoretical middle
    merge_sort(arr, low, mid);        // recursive call for the left half after division
    merge_sort(arr, mid + 1, high);   // recursive call for the right half while the left part was already sorted in the above function call
    mergearray(arr, low, mid, high);  // merging the two halves of the array using mergearray function with exact same logic of merging two continuous sorted halves of an array
}

int main()
{
    int arr[] = {10, 5, 30, 15, 7};
    merge_sort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}