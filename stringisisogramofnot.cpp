//{ Driver Code Starts
#include <iostream>
#include <set>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        set<char> visited;
        for (int i = 0; i < s.length(); i++)
        {
            if (visited.find(s[i]) == visited.end())
            {
                visited.insert(s[i]);
            }
            else
                return false;
        }

        return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        Solution obj;
        cout << obj.isIsogram(s) << endl;
    }
    return 0;
}
// } Driver Code Ends