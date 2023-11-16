class Solution {
public:


    void generateBinaryCombinations(int n, std::unordered_map<string, int> &binaryMap)  
    {
        for (int i = 0; i < (1 << n); ++i) {
            std::string binaryString;
            for (int j = n - 1; j >= 0; --j) {
                binaryString += (i & (1 << j)) ? '1' : '0';
            }
            binaryMap[binaryString] = 0;
        }
    }

    string findDifferentBinaryString(vector<string>& nums) 
    {
        if(nums.size() == 0) return nums[0] == "1" ? "0" : "1";
        unordered_map<string,int> mp;
        generateBinaryCombinations(nums.size() , mp);
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]] = 1;
        }

        for(auto x : mp)
        {
            if(x.second == 0)
                return x.first;
        }

        return "";
    }
};