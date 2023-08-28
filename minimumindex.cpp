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
    // Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_map<char, int> ele_present;
        for (int i = 0; i < str.length(); i++)
        {
            if (ele_present.find(str[i]) == ele_present.end())
            {
                ele_present[str[i]] = i;
            }
        }

        int res = str.length();
        for (int i = 0; i < patt.length(); i++)
        {
            if (ele_present.find(patt[i]) != ele_present.end())
            {
                res = min(res, ele_present[patt[i]]);
            }
        }
        if (res == str.length())
        {
            return -1; // No match found
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
        string str;
        string patt;
        cin >> str;
        cin >> patt;
        Solution obj;
        cout << obj.minIndexChar(str, patt) << endl;
    }
    return 0;
}

// } Driver Code Ends