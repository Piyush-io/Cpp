//{ Driver Code Starts
// Initial Template for C++

#include <algorithm>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string temp = str;
        sort(temp.begin(), temp.end());
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] < 97)
            {
                str[i] = temp[j];
                j++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 97)
            {
                str[i] = temp[j];
                j++;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        Solution obj;
        cout << obj.caseSort(str, n) << endl;
    }
}
// } Driver Code Ends