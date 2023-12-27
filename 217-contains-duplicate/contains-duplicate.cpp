class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> present;
        for(auto x : nums)
        {
            if(present.find(x) != present.end())
                return true;
            else
                present.insert(x);
        }

        return false;
    }
};