//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find maximum of minimums of every window size.
    vector<int> leftnextsmaller(int arr[], int n)
    {
        stack<int> s;
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = s.top();
            }

            s.push(i);
        }
        return ans;
    }

    vector<int> rightnextsmaller(int arr[], int n)
    {
        stack<int> s;
        vector<int> ans(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans[i] = n;
            }
            else
            {
                ans[i] = s.top();
            }
            s.push(i);
        }
        return ans;
    }

    vector<int> maxOfMin(int arr[], int n)
    {
        vector<int> lns = leftnextsmaller(arr, n);
        vector<int> rns = rightnextsmaller(arr, n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int temp = rns[i] - lns[i] - 2;
            ans[temp] = max(ans[temp], arr[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            ans[i] = max(ans[i], ans[i + 1]);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        vector<int> res = ob.maxOfMin(a, n);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends