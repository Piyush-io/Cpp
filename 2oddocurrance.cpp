#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 10, 6, 10, 6, 3, 3};
    int n = 8;

    int a = arr[0];
    for (int i = 1; i < n; i++)
    {
        a = a ^ arr[i];
    }
    int first = 0, second = 0;

    int k = a & (~(a - 1));
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & k) != 0)
        {
            first = first ^ arr[i];
        }
        else
        {
            second = second ^ arr[i];
        }
    }
    cout << first << " " << second << endl;
}