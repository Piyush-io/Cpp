class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int count = 0;
        for(string x : details)
        {
            int tens = x[11] - '0'; // Convert character to integer
            int units = x[12] - '0'; // Convert character to integer
            int age = tens * 10 + units; // Calculate age
            if(age > 60)
                count++;
        }

        return count;
    }
};