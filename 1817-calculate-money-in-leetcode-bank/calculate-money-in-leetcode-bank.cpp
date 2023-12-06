class Solution {
public:
    int totalMoney(int n) 
    {
        int week = n / 7;
        int money = week * 28;
        money += (7 * week * (week - 1)) / 2;
        if (n % 7) 
        {
            int x = n % 7;
            int rem_money = week + 1;
            for (int i = 0; i < x; ++i) 
            {
                money += rem_money;
                rem_money += 1;
            }
        }
        return money;
    }
};