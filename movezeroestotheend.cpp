#include <iostream>
using namespace std;

void movezero(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    for (int i = count; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    int arr[] = {8, 5, 0, 10, 0, 20}; // initalising the array
    movezero(arr, 6);
}