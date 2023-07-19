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
        else if (arr1[j - 1] == arr1[j] && j > 0)
        {
            j++;
            continue;
        }
        else if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << endl;
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << endl;
            j++;
        }
        else
        {
            cout << arr1[i] << endl;
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (arr1[i - 1] != arr1[i])
        {
            cout << arr1[i] << endl;
            i++;
        }
    }
    while (j < m)
    {
        if (arr2[j - 1] != arr2[j])
        {
            cout << arr2[j] << endl;
            j++;
        }
    }
}

int main()
{
    int a[] = {3, 5, 8};
    int b[] = {2, 8, 9, 10, 15};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    // sort
    sort(a, a + n);
    sort(b, b + m);

    // Function call
    intersection(a, b, n, m);
}