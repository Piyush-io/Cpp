//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int betBalance(string result)
    {
        // code here
        int sum = 4;
        int bet = 1;
        int i = 0;
        while (i < result.size())
        {
            if (result[i] == 'W')
            {
                sum += bet;
                bet = 1;
                i++;
                cout << sum << endl;
                cout << bet << endl << endl;
            }
            else
            {
                if (bet > sum)
                    return -1;
                sum -= bet;
                bet *= 2;
                i++;
                cout << sum << endl;
                cout << bet << endl << endl;
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