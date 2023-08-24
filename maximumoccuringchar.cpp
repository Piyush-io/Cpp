//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char reschar;
        int rescount = INT_MIN;
        map<char, int> count;
        for (auto i : str)
        {
            count[i]++;
        }

        for (const auto &i : count)
        {
            if (rescount < i.second)
            {
                reschar = i.first;
                rescount = i.second;
            }
            if (rescount == i.second)
            {
                reschar = min(reschar, i.first);
            }
        }
        return reschar;
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
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;
    }
}
// } Driver Code Ends