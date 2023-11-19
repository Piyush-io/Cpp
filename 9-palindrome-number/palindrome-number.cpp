class Solution {
public:
    bool isPalindrome(int x) 
    {
        string rev = to_string(x);
        string temp = rev;
        reverse(temp.begin(), temp.end());
        return rev == temp;
    }
};