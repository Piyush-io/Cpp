//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends
class Solution
{
private:
    bool isOperand(char c)
    {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }

    bool isOperator(char c)
    {
        return c == '*' || c == '/' || c == '+' || c == '-' || c == '^';
    }

    int getOperatorPrecedence(char c)
    {
        if (c == '^')
            return 2;
        if (c == '*' || c == '/')
            return 1;
        if (c == '+' || c == '-')
            return 0;
        return -1; // Lowest precedence for others
    }

    bool hasHigherPrecedence(char op1, char op2)
    {
        int precedence1 = getOperatorPrecedence(op1);
        int precedence2 = getOperatorPrecedence(op2);
        return precedence1 >= precedence2;
    }

public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        stack<char> exp;
        string ans = "";
        for (auto x : s)
        {
            if (isOperand(x))
            {
                ans += x;
            }

            else if (x == '(')
            {
                exp.push(x);
            }

            else if (isOperator(x))
            {
                while (!exp.empty() && exp.top() != '(' && hasHigherPrecedence(exp.top(), x))
                {
                    ans += exp.top();
                    exp.pop();
                }
                exp.push(x);
            }

            else if (x == ')')
            {
                while (exp.top() != '(')
                {
                    ans += exp.top();
                    exp.pop();
                }
                exp.pop();
            }

            else
            {
                ans += x;
            }
        }

        while (!exp.empty())
        {
            ans += exp.top();
            exp.pop();
        }

        return ans;
    }
};

//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends