//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n)
    {
        vector<string> res;
        unordered_map<string, int> votes;

        for (int i = 0; i < n; i++)
        {
            votes[arr[i]]++;
        }

        int maxCount = 0;
        string winner;

        for (const auto &i : votes)
        {
            if (i.second > maxCount)
            {
                maxCount = i.second;
                winner = i.first;
            }
            else if (i.second == maxCount && i.first < winner)
            {
                winner = i.first;
            }
        }

        res.push_back(winner);
        res.push_back(to_string(maxCount));
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        string arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr, n);

        cout << result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends