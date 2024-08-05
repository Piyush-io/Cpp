class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int> distinct;
        for(const string& x : arr)
        {
            distinct[x]++;
        }
        int count = 0;
        for(const string& x : arr)
        {
            if(distinct[x] == 1)
            {   
                count++;
                if(count == k)
                    return x;
            }
        }
        return "";
    }
};