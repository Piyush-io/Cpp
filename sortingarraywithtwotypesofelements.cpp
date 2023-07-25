#include <iostream>
using namespace std;

void reorder(int *arr, int n)
{
    int i = -1;
    int j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);

        do
        {
            j--;
        } while (arr[j] >= 0);

        if (i >= j)
            return;

        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {15, -3, -2, 18};
    reorder(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
}