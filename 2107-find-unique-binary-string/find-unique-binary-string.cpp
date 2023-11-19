class Solution {
public:

/*
    void generateBinaryCombinations(int n, std::unordered_map<string, int> &binaryMap)  
    {
        int totalCombinations = 1 << n;

        for (int i = 0; i < totalCombinations; ++i) 
        {
            bitset<32> binary(i);
            binaryMap[binary.to_string().substr(32 - n)] = 0;
        }
    } */

    string findDifferentBinaryString(vector<string>& nums) 
    {
        /* if(nums.size() == 0) return nums[0] == "1" ? "0" : "1";
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

        return ""; */

        unordered_set<int> integers;
        for (string num : nums) {
            integers.insert(stoi(num, 0, 2));
        }
        
        int ans = stoi(nums[0], 0, 2);
        int n = nums.size();
        
        while (integers.find(ans) != integers.end()) {
            ans = rand() % (int) pow(2, n);
        }
        
        return bitset<16>(ans).to_string().substr(16 - n);
    }
};