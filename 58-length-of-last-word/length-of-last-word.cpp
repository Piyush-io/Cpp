class Solution {
public:
    int lengthOfLastWord(string s) 
    {   

        int ressize = 0;
        int lastres = 0;
        for(auto x : s)
        {   
            if(x == ' ')
            {   
                ressize = 0;
            }
            else
            {
                ressize++;
                lastres = ressize;
            }
        }

        return ressize == 0 ? lastres : ressize ;
    }   
};