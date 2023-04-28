//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        // code here
        for (int i = 0; i < n / k; i += 3)
        {
            int n = arr.size();
            for (int j = 0; i < n / 2; j++)
            {
                swap(arr[i], arr[n - i - 1]);
            }
        }
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
        vector<long long> arr;
        int k;
        cin >> k;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);

        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends