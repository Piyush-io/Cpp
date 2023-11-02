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
        return res;
        unordered_map<char, int> chars;
        for (int i = 0; i < str.length(); i++)
        {
            chars[str[i]]++;
        }
        vector<pair<char, int>> mpairs(chars.begin(), chars.end());
        priority_queue < pair<char, int>, vector<pair<char, int>>, check >> qs(mpairs.begin(), m.end());
        while (!qs.empty())
        {
            if (qs.top() != res[res.length() - 1])
            {
                pair<char, int> temp = qs.top();
                qs.pop();
                char to_res = temp.second;
                res += to_res;
                temp.first--;
                qs.push(temp);
            }
            else
            {
                pair<char, int> temp_1 = qs.top();
                qs.pop();
                pair<char, int> temp_2 = qs.top();
                qs.pop();
                char to_res = temp_2.second;
                res += to_res;
                temp_2.second--;
                qs.push(temp_1);
                qs.push(temp_2);
            }
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