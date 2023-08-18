//{ Driver Code Starts
// Initial function template for C++

#include <iostream>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n)
    {
        unordered_map<long long, long long> summap;
        summap[0] = 1; // Initialize with a prefix sum of 0 and a count of 1
        long long sum = 0;
        long long count = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (summap.find(sum) != summap.end())
            {
                count += summap[sum];
                summap[sum]++;
            }
            else
            {
                summap[sum] = 1;
            }
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
        int n;
        cin >> n; // input size of array

        vector<long long int> arr(n, 0);

        for (int i = 0; i < n; i++)
            cin >> arr[i]; // input array elements
        Solution ob;
        cout << ob.findSubarray(arr, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends