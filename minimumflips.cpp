#include <iostream>
using namespace std;

void minimumflips(int *arr, int n)
{
    int count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count_1++;
    }
    int count_0 = n - count_1;

    if (count_1 > count_0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = 1;
            }
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[i] = 0;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    minimumflips(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}