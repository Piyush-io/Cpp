class Solution {
public: 

    unordered_map<char,int> mymap = 
    {
        {'I' , 1},
        {'V' , 5},
        {'X' , 10},
        {'L' , 50},
        {'C' , 100},
        {'D' , 500},
        {'M' , 1000},
    };

    int romanToInt(string s) 
    {
        int res = 0;
        int prevValue = 0;
        int it;
        for(auto x : s)
        {
            it = mymap[x];
            res += it;
            if (it > prevValue) 
            {
                res -= 2 * prevValue;
            }
            prevValue = it;
        }

        return res;
    }
};