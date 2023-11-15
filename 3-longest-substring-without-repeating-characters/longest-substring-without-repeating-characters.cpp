class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int res = 0;
        int count = 0;
        unordered_set<char> elements;

        for (int i = 0; i < s.length(); ++i) 
        {
            if (elements.find(s[i]) == elements.end()) 
            {
                elements.insert(s[i]);
                count++;
            } 
            else 
            {
                res = max(res, count);
                while (s[i - count] != s[i]) 
                {
                    elements.erase(s[i - count]);
                    count--;
                }
            }
        }

        return max(res, count);
    }
};