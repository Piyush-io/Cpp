#include <iostream>
using namespace std;

void lomuto(int *arr, int low, int high)
{
    int pivot = arr[high];
    cout << "Your pivot will be: " << pivot << endl;
    int i = low - 1;
    for (int j = 0; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
            cout << arr[j] << " " << arr[i] << endl;
        }
    }
    swap(arr[i + 1], arr[high]);
    return;
}
int main()
{
    int arr[] = {5, 10, 2, 8, 6, 7};
    lomuto(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}