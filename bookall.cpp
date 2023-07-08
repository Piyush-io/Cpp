//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include <numeric>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to find minimum number of pages.
    bool feasable(int *arr, int n, int k, int pans)
    {
        int count = 1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (pans < arr[i])
            {
                return false;
            }
            else if (sum + arr[i] > pans)
            {
                count++;
                sum = arr[i];
                if (count > k)
                    return false;
            }
            else
            {
                sum += arr[i];
            }
        }
        if (count <= k)
            return true;
    }

    int findPages(int *arr, int n, int k)
    {
        if (n < k)
        {
            return -1;
        }

        int high = accumulate(arr, arr + n, 0);
        int low = *max_element(arr, arr + n);
        int res = -1;
        while (low <= high)
        {
            int possibleans = (low + high) / 2;
            if (feasable(arr, n, k, possibleans))
            {
                res = possibleans;
                high = possibleans - 1;
            }
            else
            {
                low = possibleans + 1;
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
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends