#include <iostream>
using namespace std;

int longestsubarrayofalternatingoddandeven(int *arr, int n)
{
    int count = 1; //[10,12,14,7,8]
    int res = 1;
    int previous = (arr[0] % 2 == 0) ? 0 : 1;
    cout << previous;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) {
            count++;
        }
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0) {
            count++;
        }
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) {
            count = 1;
        }
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0) {
            count = 1;
        }
        res = max(res, count);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longestsubarrayofalternatingoddandeven(arr, n) << endl;
    return 0;
}