//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<long long> s;
        long long res = -1;
        for (long long i = 0; i < n; i++)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
            {
                long long ht = arr[s.top()];
                s.pop();
                long long width = s.empty() ? i : i - s.top() - 1;
                res = max(res, ht * width);
            }
            s.push(i);
        }

        while (!s.empty())
        {
            long long ht = arr[s.top()];
            s.pop();
            long long width = s.empty() ? n : n - s.top() - 1;
            res = max(res, ht * width);
        }

        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.getMaxArea(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends