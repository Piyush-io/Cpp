#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
    public:
        unordered_map<char, int> romanMap;
    Solution()
    {
        romanMap['I'] = 1;
        romanMap['V'] = 5;
        romanMap['X'] = 10;
        romanMap['L'] = 50;
        romanMap['C'] = 100;
        romanMap['D'] = 500;
        romanMap['M'] = 1000;
    }
    int romanToInt(string s)
    {
        int n = s.size();
        int res = 0;
        int count = 0;
        int i = 0;
        while(i < n)
        {
            if (romanMap[s[i]] < romanMap[s[i+1]])
            {
                res = res + romanMap[s[i + 1]] - romanMap[s[i]];
                i += 2;
            }
            else
            {
                res += romanMap[s[i]];
                i++;
            }
        }
        return res;
    }
};

int main() { return 0; }
