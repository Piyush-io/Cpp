//{ Driver Code Starts
#include <iostream>
using namespace std;

int strstr(string, string);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;

        cin >> a;
        cin >> b;

        cout << strstr(a, b) << endl;
    }
}

// } Driver Code Ends

// Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int n1 = s.length();
    int n2 = x.length();
    int res;
    for (int i = 0; i <= n1 - n2; i++)
    {
        if (s[i] == x[0])
        {
            if (s.substr(i,n2) == x)
            {
                res = i;
                break;
            }
            else
                continue;
        }
    }
    return res;
}