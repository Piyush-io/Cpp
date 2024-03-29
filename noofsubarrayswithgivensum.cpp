//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_map<int, int> prefixSumCount;
        int count = 0;
        int prefixSum = 0;

        for (int i = 0; i < n; i++)
        {
            prefixSum += arr[i];

            if (prefixSum == sum)
            {
                count++;
            }

            if (prefixSumCount.find(prefixSum - sum) != prefixSumCount.end())
            {
                count += prefixSumCount[prefixSum - sum];
            }

            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> sum;
        Solution obj;
        cout << obj.subArraySum(arr, n, sum) << endl;
    }
    return 0;
}
// } Driver Code Ends