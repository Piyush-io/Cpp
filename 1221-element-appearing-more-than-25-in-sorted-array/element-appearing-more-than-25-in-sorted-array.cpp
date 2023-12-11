class Solution {
public:
    int findSpecialInteger(vector<int>& arr)
    {
        int n = arr.size();
        if(n < 1)
            return 0;

        unordered_map<int,int> mp;
        for(auto x : arr)
        {
            mp[x]++;
            if(mp[x] > n/4)
                return x;
        }   

        return -1;
    }
};