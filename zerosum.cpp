//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <iostream>
#include <unordered_set>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        int sum = 0;
        unordered_set<int> sums;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];  //calculate prefix sum
            if (sums.find(sum) != sums.end())  //if the sum is net sum is present in set then return true
            {
                return true;
            }
            else if (sum == 0)  //if the net sum is 0
            {
                return true;
            }
            else  //if not present in set and not equal to 0 then insert in set
            {
                sums.insert(sum);
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        if (obj.subArrayExists(arr, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
// } Driver Code Ends