class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> present;
        int left = 0;
        int result = 0;

        for (int right = 0; right < s.size(); ++right) {
            while (present.find(s[right]) != present.end()) {
                present.erase(s[left]);
                ++left;
            }
            present.insert(s[right]);
            result = max(result, right - left + 1);
        }

        return result;
    }
};