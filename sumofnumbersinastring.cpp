//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int t = 0;
        long sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
            {
                t = i;
                while (i < str.length() && isdigit(str[i]))
                {
                    i++;
                }
                sum += stoi(str.substr(t, i - t));
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    // input alphanumeric string
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.findSum(str);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends