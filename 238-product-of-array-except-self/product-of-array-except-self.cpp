class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> leftProducts(size, 1);
        vector<int> rightProducts(size, 1);
        vector<int> result(size);
        for (int i = 1; i < size; ++i) {
            leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
        }
        for (int i = size - 2; i >= 0; --i) {
            rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < size; ++i) {
            result[i] = leftProducts[i] * rightProducts[i];
        }
        return result;
    }
};