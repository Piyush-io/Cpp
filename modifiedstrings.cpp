//{ Driver Code Starts
#include <iostream>
#define br     \
    char xx;   \
    cin >> xx; \
    cout << xx << endl;
#define lli long long int
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find minimum number of characters which Ishaan must insert
    // such that string doesn't have three consecutive same characters.
    int modified(string a)
    {
        int count = 1;
        int res = 0;
        for (int i = 1; i < a.length(); i++)
        {
            if (a[i] == a[i - 1])
            {
                count++;
            }
            if (count == 3)
            {
                count = 0;
                res++;
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
    string a;
    while (t--)
    {
        cin >> a;
        Solution obj;
        cout << obj.modified(a) << endl;
    }
    return 0;
}

// } Driver Code Ends