//{ Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the next greater element for each element of the array.
    vector<long long> StockSpan(vector<long long> arr, int n)
    {
        vector<long long> res;
        stack<long long> s;
        s.push(n - 1);
        res.push_back(1);
        for (long long i = 1; i < n; i++)
        {
            while (s.empty() == false && s.top() <= arr[i])
            {
                s.pop();
            }

            long long span = s.empty() ? i + 1 : i - s.top();
            res.push_back(span);
            s.push(i);
        }
        return res;
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
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution obj;
        vector<long long> res = obj.StockSpan(arr, n);
        for (long long i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends