//{ Driver Code Starts
// Initial function template for C++

#include <iostream>
#include <unordered_set>
#include <math.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to return list containing all the pairs having both
    // negative and positive values of a number in the array.
    vector<int> findPairs(int arr[], int n)
    {
        vector<int> res;
        unordered_set<int> eles;
        for (int i = 0; i < n; i++)
        {
            int num = abs(arr[i]);
            if (eles.find(num) != eles.end())
            {
                res.push_back(-num);
                res.push_back(num);
                eles.erase(num);
            }
            else
            {
                eles.insert(num);
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<int> res = obj.findPairs(arr, n);
        if (res.size() != 0)
        {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}
// } Driver Code Ends