//{ Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        stack<char> temp;
        for (auto x : str)
        {
            if (temp.empty())
            {
                temp.push(x);
                continue;
            }

            if (temp.top() == x)
            {
                temp.pop();
                continue;
            }
            temp.push(x);
        }

        string res = "";
        while (!temp.empty())
        {
            res += temp.top();
            temp.pop();
        }

        reverse(res.begin(), res.end());
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
        string s;
        cin >> s;
        Solution obj;
        string ans = obj.removePair(s);
        if (ans == "")
            cout << "Empty String" << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends