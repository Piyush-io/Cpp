class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxElement = *max_element(nums.begin(), nums.end());
        long long count = 0;  // Count of subarrays where max element appears at least k times
        int windowStart = 0;  // Start of the sliding window
        int maxCount = 0;     // Count of occurrences of maxElement in the current window

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