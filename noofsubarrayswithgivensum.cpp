//{ Driver Code Starts
// code to find number of subarrays with given sum using unorderd_set?
#include <iostream>
#include <unordered_set>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_set<int> s;
        int curr_sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            if (curr_sum == sum)
            {
                count++;
            }
            if (s.find(curr_sum - sum) != s.end())
            {
                count++;
            }
            s.insert(curr_sum);
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