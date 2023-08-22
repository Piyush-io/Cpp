//{ Driver Code Starts
#include <string>
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1, string s2)
    {
        string rev = s2;
        reverse(rev.begin(), rev.end());
        return rev == s1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.areRotations(s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends