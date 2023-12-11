class Solution {
public:
    int findSpecialInteger(vector<int>& arr)
    {
        if(arr.size() < 1)
            return 0;

        unordered_map<int,int> mp;
        for(auto x : arr)
        {
            mp[x]++;
            if(mp[x] > arr.size()/4)
                return x;
        }   

        return -1;
    }
};