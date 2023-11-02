//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to rearrange the characters in a string such that
    // no two adjacent characters are same.

    struct check
    {
        bool operator()(const pair<int, int> &a, const pair<int, int> &b)
        {
            return a.second < b.second; // Ordering by values in ascending order.
        }
    };

    string rearrangeString(string str)
    {
        string res = "";
        unordered_map<char, int> chars;
        for (int i = 0; i < str.length(); i++)
        {
            chars[str[i]]++;
        }
        vector<pair<char, int>> mpairs(chars.begin(), chars.end());
        priority_queue<pair<char, int>, vector<pair<char, int>>, check> pq(mpairs.begin(), mpairs.end());

        pair<char, int> prev = {'#', -1};
        while (!pq.empty())
        {
            pair<char, int> curr = pq.top();
            pq.pop();

            res += curr.first;
            curr.second--;

            if (prev.second > 0)
            {
                pq.push(prev);
            }

            prev = curr;
        }

        if (res.length() != str.length())
        {
            return "Not possible";
        }

        return res;
    }
};

//{ Driver Code Starts.

int checker(string str, string pat)
{
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    if (str.length() != pat.length())
        return 0;
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 97]--;
        if (pat[i] < 97 || pat[i] > 122)
            return 0;
        freq[pat[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
        if (freq[i] != 0)
            return 0;
    for (int i = 0; i < pat.length() - 1; i++)
        if (pat[i] == pat[i + 1])
            return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string str, ret;
        cin >> str;
        Solution ob;
        ret = ob.rearrangeString(str);
        cout << checker(str, ret) << endl;
    }
    return 0;
}
// } Driver Code Ends