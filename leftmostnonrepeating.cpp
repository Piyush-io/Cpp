//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
        int n = 256;
        int pos[n];
        memset(pos, 0, sizeof(pos));
        int res = INT_MAX;
        for (int i = 0; i < s.length(); i++)
        {
            pos[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (pos[s[i]] == 1)
            {
                return s[i];
            }
        }

        return '$';
    }
};

//{ Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonrepeatingCharacter(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;
    }

    return 0;
}

// } Driver Code Ends