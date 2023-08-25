//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <unordered_map>
using namespace std;

// User function Template for C++

class Solution
{
public:
    // Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter(string s)
    {
        unordered_map<char, int> pos;
        for (int i = 0; i < s.length(); i++)
        {
            if (pos.find(s[i]) == pos.end())
            {
                pos[s[i]]++;
            }
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (pos[s[i]] > 1)
            {
                return pos[s[i]];
            }
        }
        return -1;
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