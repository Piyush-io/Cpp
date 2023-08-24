//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <iostream>
#include <map>
#include <set>
using namespace std;

using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if (str1.length() != str2.length())
        {
            return 0;
        }

        map<char, char> m;
        set<char> usedchars;
        for (int i = 0; i < str1.length(); i++)
        {
            char x = str1[i];
            char y = str2[i];
            if (m.find(x) == m.end()) // x is not mapped yet(from first string)
            {
                if (usedchars.find(y) != usedchars.end())
                {
                    return 0;
                }
                else
                {
                    m[x] = y;
                    usedchars.insert(y);
                }
            }
            else
            {
                if (m[x] != y)
                {
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1;
        cin >> s2;
        Solution obj;
        cout << obj.areIsomorphic(s1, s2) << endl;
    }

    return 0;
}
// } Driver Code Ends