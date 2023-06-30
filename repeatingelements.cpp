#include <iostream>
using namespace std;

// 0 is included
// all elements present from 0 to arr[max]
// every element appears once except one

int repeatingelement(int *arr, int n)
{   
    bool *A = new bool[n-1];
    memset(A,false,n-1);
    for(int i = 0 ; i < n ; i++)
    {   
        if (A[arr[i]])
        {
            return arr[i];
        }
        else
            A[arr[i]] = true;
    }
    delete[] A;
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    // int arr[n];
    const int mx = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = repeatingelement(arr, n);
    cout << res << endl;
    delete[] arr;
}