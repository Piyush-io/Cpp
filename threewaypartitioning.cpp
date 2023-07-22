#include <iostream>
using namespace std;

void threewaypartition(int *arr, int n, int a, int b)
{
    int i, j, k;
    i = 0;
    j = n - 1;
    k = 0;
    while (k <= j)
    {
        if (arr[k] > b && arr[k] > a)
        {
            swap(arr[k], arr[j]);
            j--;
        }
        else if (arr[k] < a && arr[k] < b)
        {
            swap(arr[k], arr[i]);
            i++;
            k++;
        }
        else
            k++;
    }
}

int main()
{
    int arr[] = {87, 78, 16, 94};
    int n = 4;
    int a, b;
    cin >> a >> b;
    threewaypartition(arr, n, a, b);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}