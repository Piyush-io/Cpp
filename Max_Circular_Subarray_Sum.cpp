//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // num: size of array
    // Function to find maximum circular subarray sum.

    int kadanes(int arr[], int n)
    {
        int res = arr[0];
        int maxsum = arr[0];
        for (int i = 1; i < n; i++)
        {
            maxsum = max(maxsum + arr[i], arr[i]);
            res = max(maxsum, res);
        }
        return res;
    }

    int circularSubarraySum(int arr[], int num)
    {

        // your code here
        int max_normal = kadanes(arr, num);
        if (max_normal < 0)
        {
            return max_normal;
        }

        int sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum += arr[i];
            arr[i] = -arr[i];
        }

        int cirsum = sum + kadanes(arr, num);
        return max(cirsum, max_normal);
    }
};

//{ Driver Code Starts.

int main()
{
    int T;

    // testcases
    cin >> T;

    while (T--)
    {
        int num;

        // size of array
        cin >> num;
        int arr[num];

        // inserting elements
        for (int i = 0; i < num; i++)
            cin >> arr[i];

        Solution ob;
        // calling function
        cout << ob.circularSubarraySum(arr, num) << endl;
    }

    return 0;
}
// } Driver Code Ends