#include <iostream>
#include <algorithm>
using namespace std;

int max_guests(int *arr, int *dep, int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int guests_in = 1;
    int time = arr[0];
    int max_guests = 1;
    int i = 1;
    int j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            guests_in++;
            if (guests_in > max_guests)
            {
                max_guests = guests_in;
                time = arr[i];
            }

            i++;
        }

        else
        {
            guests_in--;
            j++;
        }
    }

    return max_guests;
}

int main()
{
    int arr[] = {1, 2, 10, 5, 5};
    int dep[] = {4, 5, 12, 9, 12};
    cout << max_guests(arr, dep, 5) << endl;
}