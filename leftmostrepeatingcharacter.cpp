//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <map>
using namespace std;

// User function Template for C++

class Solution
{
public:
    // Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter(string s)
    {
        int n = 256;
        int pos[n];
        memset(pos, -1, sizeof(pos));
        int res = INT_MAX;
        for (int i = 0; i < s.length(); i++)
        {
            if (pos[s[i]] == -1)
            {
                pos[s[i]] = i;
            }
            else
            {
                res = min(pos[s[i]], res);
            }
        }

        if (res == INT_MAX)
        {
            return -1;
        }
        else
            return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        Solution obj;
        int index = obj.repeatedCharacter(s);
        if (index == -1)
            cout << -1 << endl;
        else
            cout << s[index] << endl;
    }
    return 0;
}

// } Driver Code Ends