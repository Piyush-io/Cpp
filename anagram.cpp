//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {

        if (a.length() != b.length())
        {
            return false;
        }

        if (a.length() == 1 && b.length() == 1)
        {
            return a[0] == b[0];
        }

        map<char, int> count1;
        map<char, int> count2;
        for (int i = 0; i < a.length(); i++)
        {
            count1[a[i]]++;
        }

        for (int i = 0; i < b.length(); i++)
        {
            count2[b[i]]++;
        }

        for (int i = 0; i < a.length(); i++)
        {
            char temp = a[i];
            if (count1.find(temp) != count1.end() && count2.find(temp) != count2.end())
            {
                if (count1[temp] != count2[temp])
                {
                    return false;
                }
            }
            if (count1.find(temp) != count1.end() && count2.find(temp) == count2.end())
                return false;
            if (count1.find(temp) == count1.end() && count2.find(temp) != count2.end())
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// } Driver Code Ends