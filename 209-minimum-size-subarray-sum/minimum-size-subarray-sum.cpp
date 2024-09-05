class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int li = 0;
        int sum = 0;
        int result = INT_MAX;
        bool found = false;

        for (int ri = 0; ri < nums.size(); ri++) {
            sum += nums[ri];

            // Adjusting li to maintain the sum condition
            while (sum >= target) {
                found = true;
                result = min(result, ri - li + 1);
                sum -= nums[li++];
            }
        }

        return found ? result : 0;
    }
};