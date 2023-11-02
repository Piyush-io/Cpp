//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        priority_queue<int> qs; // Using max-heap to store the largest k elements.
        for (int i = 0; i < n; i++)
        {
            qs.push(arr[i]);
            if (qs.size() > k)
            {
                qs.pop(); // Maintain the max-heap size to be at most k.
            }
        }
        return qs.top(); // The top of the max-heap contains the kth smallest element.
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        Solution ob;
        cout << ob.kthSmallest(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends