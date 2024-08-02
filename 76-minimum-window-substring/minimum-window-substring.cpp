class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty())
            return "";

        int res = INT_MAX;
        pair<int, int> res_string = {-1, -1};
        int l = 0, r = 0;
        unordered_map<char, int> t_freq;
        for (char c : t) {
            t_freq[c]++;
        }
        unordered_map<char, int> s_freq;
        int required = t_freq.size();
        int have = 0;

        while (r < s.size()) {
            char x = s[r];
            if (t_freq.find(x) != t_freq.end()) {
                s_freq[x]++;
                if (s_freq[x] == t_freq[x]) {
                    have++;
                }
            }

            while (have == required) {
                if ((r - l + 1) < res) {
                    res = r - l + 1;
                    res_string = {l, r};
                }

                char x = s[l];
                if (t_freq.find(x) != t_freq.end()) {
                    s_freq[x]--;
                    if (s_freq[x] < t_freq[x]) {
                        have--;
                    }
                }
                l++;
            }
            r++;
        }

        return res == INT_MAX
                   ? ""
                   : s.substr(res_string.first,
                              res_string.second - res_string.first + 1);
    }
};