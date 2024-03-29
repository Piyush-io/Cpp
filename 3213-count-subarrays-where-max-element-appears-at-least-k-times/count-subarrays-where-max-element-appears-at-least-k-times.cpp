class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxElement = *max_element(nums.begin(), nums.end());
        long long count = 0; 
        int windowStart = 0;  
        int maxCount = 0;    

        for (int windowEnd = 0; windowEnd < n; windowEnd++) {
            if (nums[windowEnd] == maxElement) {
                maxCount++;
            }

            while (maxCount >= k) {
                count += n - windowEnd; 
                if (nums[windowStart] == maxElement) {
                    maxCount--;
                }
                windowStart++;
            }
        }
        return count;
    }
};