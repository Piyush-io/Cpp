/*
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
            int rev_num = reverseNum(nums[i]);
            int diff = nums[i] - rev_num;
            count[diff]++;
        }

        for (auto x : count) {
            if (x.second > 1) {
                long long pairs = x.second;
                res = (res + (pairs * (pairs - 1) / 2)) % MOD;
            }
        }
        return res;
    }
    */

class Solution {
public:
    int rev(int n){
        int r = 0;
        while(n>0){
             r *=10;
             r +=(n%10);
             n/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            nums[i]-=rev(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                count=count%1000000007;
                count +=m[nums[i]];
                m[nums[i]]++;
            }
            else  m[nums[i]]++;
        }
        return count%1000000007;
    }
};
