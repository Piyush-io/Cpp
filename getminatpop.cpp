#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[], int n);

void _getMinAtPop(stack<int> s);

stack<int> _push(int arr[], int n)
{
    stack<int> s;
    int minele = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minele = min(minele, arr[i]);
        s.push(minele);
    }
    return s;
}

void _getMinAtPop(stack<int> s)
{
    while (s.empty() == false)
    {
        int temp = s.top();
        cout << temp << " ";
        s.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        stack<int> mys = _push(arr, n);
        _getMinAtPop(mys);

        cout << endl;
    }
    return 0;
}