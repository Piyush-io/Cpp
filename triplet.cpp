//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a triplet in a sub-array which adds up to a given number.
    bool subarraySum(int *A, int n, int sum)
    {
        int l, r;
        sort(A , A+n);
        for (int i = 0; i < n - 2; i++)
        {
            l = i + 1; // index of the first element in the
            // remaining elements

            r = n - 1; // index of the last element
            while (l < r)
            {
                if (A[i] + A[l] + A[r] == sum)
                {
                    printf("Triplet is %d, %d, %d \n", A[i],
                           A[l], A[r]);
                    return true;
                }
                else if (A[i] + A[l] + A[r] < sum)
                    l++;
                else // A[i] + A[l] + A[r] > sum
                    r--;
            }
        }
        return false;
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
        long long s;
        cin >> n >> s;
        int *arr = new int[n];
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        bool res;
        res = ob.subarraySum(arr, n, s);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends