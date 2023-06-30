//{ Driver Code Starts
// Initial function template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n)
    {
        // code here
        int count = 1;
        int res;
        pair<long, long> pp;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                res = arr[i];
                count++;
            }
        }
        pp.first = res;
        pp.second = count;
        return pp;
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
        long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        pair<long, long> ans = obj.findRepeating(arr, n);

        cout << ans.first << " " << ans.second << endl;
    }
}
// } Driver Code Ends