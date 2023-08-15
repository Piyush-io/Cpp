//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        unordered_map<int, int> freq;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            if (freq[b[i]] > 0)
            {
                count++;
                freq[b[i]]--;
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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends