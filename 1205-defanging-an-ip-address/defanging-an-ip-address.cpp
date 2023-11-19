class Solution {
public:
    string defangIPaddr(string address) 
    {
        string to_put = "[.]";
        string res = "";
        for(auto x : address)
        {
            if(x == '.')
                res += to_put;
            else
                res += x;
        }

        return res;
    }
};