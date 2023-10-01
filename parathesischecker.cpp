//{ Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> brackets;
        if (x.length() % 2 != 0)
        {
            return false;
        }

        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '(' || x[i] == '{' || x[i] == '[')
            {
                brackets.push(x[i]);
            }
            else
            {
                if (brackets.empty())
                {
                    return false;
                }

                char topChar = brackets.top();
                brackets.pop();

                if ((x[i] == ')' && topChar != '(') ||
                    (x[i] == ']' && topChar != '[') ||
                    (x[i] == '}' && topChar != '{'))
                {
                    return false; // Mismatched brackets
                }
            }
        }
        return brackets.empty();
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}
// } Driver Code Ends