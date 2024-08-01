class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int count = 0;
        for(string x : details)
        {
            int tens = x[11] - '0'; 
            int units = x[12] - '0'; 
            int age = tens * 10 + units; 
            if(age > 60)
                count++;
        }

        return count;
    }
};