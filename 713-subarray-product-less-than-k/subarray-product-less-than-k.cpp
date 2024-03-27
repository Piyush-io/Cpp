class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0; // If k is less than or equal to 1, no subarray can have product less than k

        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = 1; // Initialize temp to 1 for each new subarray
            for (int j = i; j < nums.size(); j++) {
                temp *= nums[j]; // Update the product by multiplying with the next element
                if (temp < k)
                    res++; // Increment count for each valid subarray
                else
                    break; // Exit the inner loop if the product becomes greater than or equal to k
            }
        }
        return res;
    }
};