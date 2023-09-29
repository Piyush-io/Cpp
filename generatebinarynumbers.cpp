//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

// } Driver Code Ends

// Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{

    queue<string> reqnumbers;
    vector<string> ans;
    if (N == 0)
    {
        return ans;
    }
    reqnumbers.push("1");
    for (int i = 0; i < N; i++)
    {
        string curr = reqnumbers.front();
        ans.push_back(curr);
        reqnumbers.pop();
        reqnumbers.push(curr + "0");
        reqnumbers.push(curr + "1");
    }
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends