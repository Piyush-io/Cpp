#include <iostream>
using namespace std;

void mergearray(int *a1, int N, int *a2, int n)
{
    int i = 0;
    int j = 0;
    while (i < N && j < n)
    {
        if (a1[i] < a2[j])
        {
            cout << a1[i] << " ";
            i++;
        }
        else if (a1[i] == a2[j])
        {
            if (i > j)
            {
                cout << a2[j] << " ";
                j++;
            }
            else
            {
                cout << a1[i] << " ";
                i++;
            }
        }

        else
        {
            cout << a2[j] << " ";
            j++;
        }
    }
    while (i < N)
    {
        cout << a1[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << a2[j] << " ";
        j++;
    }
}

int main()
{
    int arr1[] = {10, 15, 20};
    int arr2[] = {5, 6, 6, 15};
    mergearray(arr1, 3, arr2, 4);
    return 0;
}