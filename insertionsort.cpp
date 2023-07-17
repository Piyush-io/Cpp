#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 18, 2, 3, 6, 3};
    int n = 6;

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];              // take the element from the unsorted part
        int j = i - 1;                 // start second loop from the index on elemnet previous to the key element because we compare with it.
        while (j >= 0 && key < arr[j]) // loop till j is greater than and equal to 0 and till key less than arr[j] element as soon as we find an element smaller than key we stop
        {
            arr[j + 1] = arr[j]; // right shifting element
            j--;
        }
        arr[j + 1] = key; // updating the correct position with key
                          //  and j+1 because for example in the given array when we take 2 as key j would become -1 after the loop completes and we update it +1 to make it 0
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}