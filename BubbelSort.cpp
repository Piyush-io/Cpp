#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 18, 2, 3, 6, 3};
    int n = 6;
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false; //variable to check if swapping occurred in between any iteration
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true; //this marks that there was some swapping in the iteration
            }
            if(swapped == false)
            {
                break; //this means that if there was no swapping in the whole iteration the array is already sorted and we dont need any more iterations making it more efficient
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}