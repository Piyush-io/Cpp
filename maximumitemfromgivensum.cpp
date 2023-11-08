//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    // Easy...
    long long minCost(long long arr[], long long n)
    {
        priority_queue<long long, vector<long long>, greater<long long>> qs;
        for (long long i = 0; i < n; i++)
        {
            qs.push(arr[i]);
        }

        long long res = 0;
        while (qs.size() > 1)
        {
            long long first = qs.top();
            qs.pop();
            long long second = qs.top();
            qs.pop();

            long long sum = first + second;
            res += sum;
            qs.push(sum);
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
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends