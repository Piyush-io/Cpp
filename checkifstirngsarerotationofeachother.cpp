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
        if (s1.length() != s2.length())
            return false;

        string concatenated = s1 + s1;  // Concatenate the first string with itself
        return concatenated.find(s2) != string::npos;
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