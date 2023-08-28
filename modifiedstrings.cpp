//{ Driver Code Starts
#include <iostream>
#define br     \
    char xx;   \
    cin >> xx; \
    cout << xx << endl;
#define lli long long int
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find minimum number of characters which Ishaan must insert
    // such that string doesn't have three consecutive same characters.
    int modified(string a)
    {
        int count = 1;
        int res = 0;
        char to_check = a[0];
        cout << "Temp character : " << to_check << endl;
        for (int i = 1; i < a.length(); i++)
        {
            if (to_check == a[i])
            {
                count++;
                cout << "Count now : " << count << endl;
                if (count == 3)
                {
                    cout << "IN NESTED IF" << endl;
                    res++;
                    count = 1;
                    cout << "Count now : " << count << endl;

                    to_check = a[i];
                    cout << "Temp character : " << to_check << endl;
                }
                        }
            else
            {
                cout << "IN ELSE" << endl;
                to_check = a[i];
                cout << "Temp character : " << to_check << endl;
                count = 1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    string a;
    while (t--)
    {
        cin >> a;
        Solution obj;
        cout << obj.modified(a) << endl;
    }
    return 0;
}

// } Driver Code Ends