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
    int count = 0;
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
            count+= n-i;
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
    cout << count << endl;
}

int main()
{
    int arr[] = {1, 4, 2, 3, 10, 15, 20, 5, 6, 6, 15, 10, 3, 4};
    mergearray(arr, 4, 6, 11);

    for (int i = 0; i < 14; i++)
    {
        cout << arr[i] << " ";
    }
}