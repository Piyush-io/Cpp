//{ Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        /*stack<char> res;
        if (s.empty())
        {
            return "";
        }

        for (auto x : s)
        {
            char temp = x;
            if (res.empty())
            {
                res.push(x);
                continue;
            }

            if (res.top() != x)
            {
                res.push(x);
            }
            else
            {
                continue;
            }
        }

        string resstirng = "";
        while (!res.empty())
        {
            resstirng += res.top();
            res.pop();
        }
        reverse(resstirng.begin(), resstirng.end());
        return resstirng;*/

        string result = "";
        for (char c : s)
        {
            // If the current character is different from the last character in result, add it to the result.
            if (result.empty() || c != result.back())
            {
                result.push_back(c);
            }
        }
        return result;
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
        cout << obj.removeConsecutiveDuplicates(s) << endl;
    }

    return 0;
}
// } Driver Code Ends