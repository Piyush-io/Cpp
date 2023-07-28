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

        if (pos == cs)
            continue;

        while (item == arr[pos])
        {
            pos += 1;
        }

        if (pos != cs)
        {
            swap(item, arr[pos]);
        }

        while (cs != pos)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                {
                    pos++;
                }
            }
            while (item == arr[pos])
                pos += 1;

            // put the item to it's right position
            if (item != arr[pos])
            {
                swap(item, arr[pos]);
            }
        }
    }
}

int main()
{
    int arr[] = {40, 20, 50, 50, 10, 30, 30};
    cyclesortdistinct(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
}