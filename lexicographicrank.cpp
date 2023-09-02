//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

const int MOD = 1000003;
const int CHAR = 256;

class Solution
{
public:
    // Function to find lexicographic rank of a string.
    int fact(int n)
    {
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = (ans * i) % MOD;
        }
        return ans;
    }

    int findRank(string S)
    {
        int n = S.length();
        int rank = 1;

        for (int i = 0; i < n; i++)
        {
            int mul = fact(n - i - 1);
            int cnt = 0;
            int freq[CHAR] = {0};

            for (int j = i; j < n; j++)
            {
                if (freq[S[j]] > 0)
                {
                    return 0; // Characters are repeated, return 0
                }
                freq[S[j]]++;

                for (int k = 0; k < int(S[i]); k++)
                {
                    cnt += freq[k];
                }
            }

            rank = (rank + (cnt * mul) % MOD) % MOD;
        }

        return rank;
    }
};

//{ Driver Code Starts.

int main()
{
    string S;
    int t;
    cin >> t;
    while (t--)
    {

        cin >> S;
        Solution obj;
        cout << obj.findRank(S) << endl;
    }
}

// } Driver Code Ends