// naive method
#include <iostream>
#include <algorithm>
using namespace std;

void countingsort(int *arr, int n)
{
    int N = n - 1;
    int temp[N];
    memset(temp, 0, n);
    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i < N; i++)
    {
        while (temp[i] > 0)
        {
            arr[j] = i;
            j++;
            temp[i]--;
        }
    }
}

int main()
{
    int arr[] = {1, 4, 4, 0, 1, 1};
    countingsort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}