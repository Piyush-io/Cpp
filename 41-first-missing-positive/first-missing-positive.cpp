class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {   
        sort(nums.begin() , nums.end());
        int res = 1;
        for(auto x : nums)
        {
            if(x == res)
            {
                res++;
            }
        }    
        return res;
    }
};