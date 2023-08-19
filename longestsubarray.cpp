//{ Driver Code Starts
#include <iostream>
#include <unordered_map>
using namespace std;
// what did you change?
//  } Driver Code Ends
class Solution
{
public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_map<int, int> prefixSumCount;
        int res = 0, prefixSum = 0;

        for (int i = 0; i < n; i++)
        {
            prefixSum += arr[i];
            if (prefixSum == sum)
            {
                res = i + 1;
            }
            if (prefixSumCount.find(prefixSum) == prefixSumCount.end())
            {
                prefixSumCount.insert({prefixSum, i});
            }
            if (prefixSumCount.find(prefixSum - sum) != prefixSumCount.end())
            {
                res = max(res, i - prefixSumCount[prefixSum - sum]);
            }
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