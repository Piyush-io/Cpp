class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int newSize = (n * (n + 1)) / 2;
        vector<int> SumArray(newSize);
        long long totalSum = 0;
        int k = 0;
        for(int i = 0 ; i < n ; i++)
        {   
            int count = 0;
            for(int j = i; j < n ; j++)
            {
                count += nums[j];
                SumArray[k++] = count;
            }
        }
        sort(SumArray.begin() , SumArray.end());
        for(int i = left-1 ; i < right ;i++)
        {
            totalSum += SumArray[i];
        }
        return totalSum % 1000000007;
    }
};