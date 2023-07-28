#include <iostream>
using namespace std;

void cyclesortdistinct(int *arr, int n)
{
    for (int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
        {
            if (arr[i] < item)
                pos++;
        }
        swap(item, arr[pos]);
        while (cs != pos)
        {
            pos = cs;
            for (int i = cs+1; i < n; i++)
            {
                if (arr[i] < item)
                {
                    pos++;
                }
            }
            swap(arr[pos], item);
        }
    }
}

int main()
{
    int arr[] = {40, 20, 50, 10, 30};
    cyclesortdistinct(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}