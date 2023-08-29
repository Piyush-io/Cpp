//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to reverse words in a given string.
    void reverse(string str[], int low, int high)
    {
        while (low <= high)
        {
            swap(str[low], str[high]);
            low++;
            high--;
        }
    }

    string reverseWords(string S)
    {
        string str = S;
        int n = S.length;
        int start = 0;
        for (int end = 0; end < n; end++)
        {
            if (str[end] == '.')
            {
                reverse(str, start, end - 1);
                start = end + 1;
            }
        }
        reverse(str, start, n - 1);
        reverse(str, 0, n - 1);
        return str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends