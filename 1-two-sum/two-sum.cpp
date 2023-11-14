class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        unordered_map<int,int> present;
        for(int i  = 0 ; i < nums.size() ; i++)
        {
            if(present.find(target-nums[i]) != present.end())
            {   
                auto it = present.find(target-nums[i]);
                ans.push_back(it->second);
                ans.push_back(i);
                break;
            }
            present[nums[i]] = i;
        }

        return ans;
    }
};
