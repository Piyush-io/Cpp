class Solution {
public:
    int minimumLength(string s) 
    {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i < j)
        {
            if(s[i] == s[j])
            {   
                char temp = s[i];
                while(s[i] == temp && i <= j)
                {
                    i++;
                    n--;
                }
                while(s[j] == temp && i <= j)
                {
                    j--;
                    n--;
                }
            }
            else
            {
                break;
            }
        }
        return n;
    }
};