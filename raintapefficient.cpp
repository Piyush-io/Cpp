//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        // code here
        long long res = 0;
        vector<int> L_MAX(n), R_MAX(n);
        L_MAX[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            L_MAX[i] = max(L_MAX[i - 1], arr[i]);
        }
        R_MAX[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            R_MAX[i] = max(R_MAX[i + 1], arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            res = res + (min(L_MAX[i], R_MAX[i]) - arr[i]);
        }

        return res;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends