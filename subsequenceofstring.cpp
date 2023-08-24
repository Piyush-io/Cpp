//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to check if a string is subsequence of other string.

    bool recursiveisSubSequence(string s1, string s2, int n, int m)
    {
        if (m == 0)
            return true;

        if (n == 0)
            return false;

        if (s1[n - 1] == s2[m - 1])
            return isSubSeq(s1, s2, n - 1, m - 1);

        else
            return isSubSeq(s1, s2, n - 1, m);
    }

    bool isSubSequence(string A, string B)
    {
        /*int i = 0;
        int j = 0;
        while (i <= A.length())
        {
            if (j > B.length())
            {
                return 0;
            }

            if (A[i] == B[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return true;*/
        return recursiveisSubSequence(A, B, A.length(), B.length());
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        Solution ob;
        bool ans = ob.isSubSequence(A, B);
        if (ans == true)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends