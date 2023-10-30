#include <iostream>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

int maxsmalleronright(int *arr, int n)
{
    set<int> s;
    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int count = distance(s.begin(), s.lower_bound(arr[i]));
        res = max(res, count);
        s.insert(arr[i]);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int res = maxsmalleronright(arr, n);
        cout << res << endl;
        delete[] arr;
    }
    return 0;
}