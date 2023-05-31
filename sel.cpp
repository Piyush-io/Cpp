#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // insert code here...
    int n = 6;
    int arr[] = {9, 5, 6, 1, 3, 8};
    for (int i = 0; i < n - 1; i++)
    {
        int z = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[z])
            {
                z = j;
            }
        }

        if (z != i)
        {
            int temp = arr[z];
            arr[z] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
