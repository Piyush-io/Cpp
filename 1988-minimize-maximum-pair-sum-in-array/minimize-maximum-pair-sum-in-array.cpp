class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        sort(nums.begin() , nums.end());
        int res = INT_MIN;
        int i = 0;
        int j = nums.size()-1;
        int sum;
        while(i < j)
        {
            sum = nums[i] + nums[j];
            res = max(res, sum);
            i++;
            j--;
        }

        return res;
    }
};