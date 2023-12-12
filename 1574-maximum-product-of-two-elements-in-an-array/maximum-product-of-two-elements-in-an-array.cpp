class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        priority_queue<int> p(nums.begin() , nums.end());
        int x = p.top();
        p.pop();
        int y = p.top();
        return (x-1)*(y-1);
    }
};