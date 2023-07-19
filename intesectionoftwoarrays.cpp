#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void intersection(int *arr1, int *arr2, int n, int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i - 1] == arr1[i] && i > 0)
        {
            i++;
            continue;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else
        {
            cout << arr1[i] << endl;
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {1, 3, 2, 3, 3, 4, 5, 5, 6};
    int b[] = {3, 3, 5};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    // sort
    sort(a, a + n);
    sort(b, b + m);

    // Function call
    intersection(a, b, n, m);
}