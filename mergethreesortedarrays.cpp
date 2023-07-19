//{ Driver Code Starts
#include <iostream>
using namespace std;

void printVector(const vector<int> &a)
{
    for (auto e : a)
    {
        cout << e << " ";
    }
    cout << endl;
}

// } Driver Code Ends
class Solution
{
public:
    vector<int> mergeTwoArrays(vector<int> a1, vector<int> a2)
    {
        int i = 0;
        int j = 0;
        vector<int> v;
        while (i < a1.size() && j < a2.size())
        {
            if (a1[i] <= a2[j])
            {
                v.push_back(a1[i]);
                i++;
            }
            else
            {
                v.push_back(a2[j]);
                j++;
            }
        }
        while (i < a1.size())
        {
            v.push_back(a1[i]);
            i++;
        }
        while (j < a2.size())
        {
            v.push_back(a2[j]);
            j++;
        }
        return v;
    }

    vector<int> mergeThree(vector<int> &A, vector<int> &B, vector<int> &C)
    {
        // Your code here
        vector<int> mergedArrays = mergeTwoArrays(A, B);
        // Merge the mergedArrays with arr3
        mergedArrays = mergeTwoArrays(mergedArrays, C);
        return mergedArrays;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, o;
        cin >> n >> m >> o;
        vector<int> A, B, C;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
        }

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            B.push_back(x);
        }

        for (int i = 0; i < o; i++)
        {
            int x;
            cin >> x;
            C.push_back(x);
        }

        Solution obj;
        vector<int> ans = obj.mergeThree(A, B, C);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
        // obj.printVector(mergeThree(A, B, C));
    }
    return 0;
}

// } Driver Code Ends