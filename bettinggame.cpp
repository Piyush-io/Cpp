//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
public:
    int betBalance(string result)
    {
        int n = result.length();
        int sum = 4;
        int bet = 1;
        for (int i = 0; i < n; i++)
        {
            if (sum < bet)
                return -1;

            if (result[i] == 'W')
            {
                sum += bet;
                bet = 1;
            }

            if (result[i] == 'L')
            {
                sum -= bet;
                bet = bet * 2;
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string result;
        cin >> result;

        Solution ob;
        cout << ob.betBalance(result) << endl;
    }
    return 0;
}
// } Driver Code Ends