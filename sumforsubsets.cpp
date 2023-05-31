#include <iostream>
using namespace std;

int sub(int *arr, int n, int sum)
{
    {
        if (n == 0)
            return (sum == 0) ? 1 : 0;
    }

    return sub(arr, n - 1, sum) + sub(arr, n - 1, sum - arr[n-1]);
}

int main()
{
    int arr[] = {10, 20, 20};
    cout << sub(arr, 3, 30) << endl;
}