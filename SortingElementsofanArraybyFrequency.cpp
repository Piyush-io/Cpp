//{ Driver Code Starts
#include <iostream>
#include <map>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[], int n)
    { 
        map<int, int> countA;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            countA[arr[i]]++;
        }
        vector<pair<int, int> > freqPairs;
        for (const auto &i : countA)
        {
            freqPairs.push_back(i);
        }
        sort(freqPairs.begin(), freqPairs.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             {
            if (a.second == b.second) {
                return a.first < b.first; // Smaller number comes first for equal frequencies
            }
            return a.second > b.second; });
            
        for (const auto &entry : freqPairs)
        {
            int freq = entry.second;
            int value = entry.first;
            for (int i = 0; i < freq; i++)
            {
                res.push_back(value);
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

    while (t--)
    {

        int n;
        cin >> n;

        int a[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(a, n);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends