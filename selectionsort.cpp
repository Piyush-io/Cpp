#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 18, 2, 3, 6, 3};
    int n = 6;
    for (int i = 0; i < n; i++)
    {   
        int min_ind = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}