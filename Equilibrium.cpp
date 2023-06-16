#include <iostream>
using namespace std;

int equipoint(int *arr , int n)
{
    long long rs = 0;
    for (int i = 0; i < n; i++)
    {
        rs += arr[i];
    }
    long long ls = 0;
    for (int i = 0; i < n; i++)
    {
        rs -= arr[i];
        if (rs == ls)
        {
            return 1+i;
        }
        ls += arr[i];
    }
    return -1;
}

int main()
{

    // taking testcases
    int t;
    cin >> t;
    while (t--)
    {

        // input number n
        int n;
        cin >> n;
        int arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // calling missingNumber()
        cout << equipoint(arr, n) << endl;
    }
    return 0;
}