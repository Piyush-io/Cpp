//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int> &s, int sizeOfStack)
    {
        int n = sizeOfStack - (((sizeOfStack + 1) / 2) - 1);
        stack<int> temp;
        for (int i = 0; i < n - 1; i++)
        {
            temp.push(s.top());
            s.pop();
        }

        s.pop();

        while (temp.empty() == false)
        {
            s.push(temp.top());
            temp.pop();
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sizeOfStack;
        cin >> sizeOfStack;

        stack<int> myStack;

        for (int i = 0; i < sizeOfStack; i++)
        {
            int x;
            cin >> x;
            myStack.push(x);
        }

        Solution ob;
        ob.deleteMid(myStack, myStack.size());
        while (!myStack.empty())
        {
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends