class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {   
        sort(tokens.begin(), tokens.end());
        int small = 0;
        int big = tokens.size() - 1;
        int res_score = 0;
        int i = 0;
        while(small <= big)
        {
            if(power >= tokens[small])
            {
                power -= tokens[small];
                small++;
                res_score++;
                continue;
            }
            else if(res_score >= 1 && small < big)
            {
                power += tokens[big];
                big--;
                res_score--;
                continue;
            }
            break;
        }
        return res_score;
    }
};