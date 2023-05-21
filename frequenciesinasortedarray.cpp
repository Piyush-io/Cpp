#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencies(long long *arr, int n)
    {
        // code here
        vector<int> v;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i-1] || i == 0 || i == n - 1)
            {
                count++;
            }
            else
            {
                v.push_back(count);
                count = 1;
            }
            
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;

    // testcases
    cin >> t;

    while (t--)
    {

        // size of array
        int n;
        cin >> n;

        long long arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        // calling rearrange() function
        vector<int> v = ob.frequencies(arr, n);

        // printing the elements
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}