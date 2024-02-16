class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2)
            return false;

        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        for(int i = 0 ; i < l1 ;i++)
        {
            smap[s[i]]++;
            tmap[t[i]]++;
        }

        for (const auto& pair : smap) {
            const auto& key = pair.first;
            const auto& value = pair.second;
            if (tmap.find(key) == tmap.end() || tmap[key] != value) {
                return false;
            }
        }
        return true;
    }
};