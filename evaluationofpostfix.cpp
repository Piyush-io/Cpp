//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <bits/stdc++.h>
using namespace std;

// same can be done for prefix we just move from right to left.....

// } Driver Code Ends
class Solution
{
private:
    bool isOperand(char c)
    {
        return (c >= '0' && c <= '9');
    }

    bool isOperator(char c)
    {
        return c == '*' || c == '/' || c == '+' || c == '-' || c == '^';
    }

public:
    // Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        int res = 0;
        stack<int> exp;
        for (auto x : S)
        {
            if (isOperand(x))
            {
                exp.push(x - '0');
            }

            else if (isOperator(x))
            {
                int temp;
                int op1 = exp.top();
                exp.pop();
                int op2 = exp.top();
                exp.pop();
                switch (x)
                {
                case '*':
                    temp = op2 * op1;
                    break;
                case '/':
                    temp = op2 / op1;
                    break;
                case '+':
                    temp = op2 + op1;
                    break;
                case '-':
                    temp = op2 - op1;
                    break;
                case '^':
                    temp = pow(op2, op1);
                }
                exp.push(temp);
            }
        }
        return exp.top();
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
        string S;
        cin >> S;
        Solution obj;

        cout << obj.evaluatePostfix(S) << endl;
    }
    return 0;
}

// } Driver Code Ends