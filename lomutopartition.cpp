#include <iostream>
using namespace std;

void lomuto(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = 0; j < high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], pivot);
    return;
}
int main()
{
    int arr[] = {5, 10, 2, 73, 6, 7};
    lomuto(arr, 0, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    
}