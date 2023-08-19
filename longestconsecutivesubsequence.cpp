//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        set<int> distinctelements;
        for (int i = 0; i < N; i++)
        {
            distinctelements.insert(arr[i]);
        }

        int res = 0;
        int count = 0;
        for (const auto &i : distinctelements)
        {
            if (distinctelements.find(i - 1) == distinctelements.end())
            {
                int num = i;
                int count = 0;
                while (distinctelements.find(num) != distinctelements.end())
                {
                    count++;
                    num++;
                }
                res = max(res, count);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends