//{ Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        int l = 0;
        int r = 1;
        int sum = arr[l];
        vector<int> v;
        while (r > l && r < n)
        {
            if (sum == s)
            {
                v.push_back(l + 1);
                v.push_back(r);
                return v;
            }

            else if (sum < s)
            {
                sum += arr[r];
                r++;
            }
            else
            {
                sum -= arr[l];
                l++;
            }
        }
        v.push_back(-1);
        return v;
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
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// iostrea