class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        for(auto x: nums)
        {   
            int index = abs(x);
            if(nums[index] < 0)
                return index;
            nums[index] = -1 * nums[index];
        }
        return -1;
    }
};