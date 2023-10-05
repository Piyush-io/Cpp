#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> shadow(int *arr, int n)
{
    vector<int> ans;
    unordered_map<int, int> present;
    for (int i = 0; i < n; i++)
    {
        present[arr[i]]++;
    }
    int a;
    int b;
    for (int i = 1; i <= n; i++)
    {
        if (present.find(i) == present.end())
        {
            b = i;
        }

        if (present[i] == 2)
        {
            a = i;
        }
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

int main()
{
    // code
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
        vector<int> a = shadow(arr, n);
        for (auto x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}