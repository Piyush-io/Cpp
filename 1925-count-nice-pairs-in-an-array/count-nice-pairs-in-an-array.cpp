class Solution {
public:

    int reverseNum(int num)
    {
        int reversed = 0;
        while (num > 0) 
        {
            reversed = (reversed * 10) + (num % 10);
            num /= 10;
        }
        return reversed;
    }
    
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int res = 0;
        const int MOD = 1e9 + 7;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i] - reverseNum(nums[i])]++;
        }

        for (auto x : count) {
            if (x.second > 1) {
                long long pairs = x.second;
                res = (res + (pairs * (pairs - 1) / 2)) % MOD;
            }
        }
        return res;
    }
};
