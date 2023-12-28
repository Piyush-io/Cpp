class Solution {
public:
vector<int> productExceptSelf(vector<int>& a)
    {
        int n = a.size();
        vector<int>v(n,1);
        for(int i = n-2; i >= 0; i--) {
           v[i] = v[i+1]*a[i+1];
        }
        int temp = 1;
        for (int i = 0; i < n; i++) {
            v[i] = v[i]*temp;
            temp = temp*a[i];
        }
        return v;
    }
};