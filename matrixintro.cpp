//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to multiply two matrices.
    vector<vector<int>> multiplyMatrix(const vector<vector<int>> &A, const vector<vector<int>> &B)
    {
        // code here
        vector<vector<int>> res(A.size(), vector<int>(B[0].size(), 0));
        if (A.size() != B[0].size())
        {
            return res;
        }

        for (int i = 0; i < A[0].size(); i++)
        {   
            for (int j = 0; j < B.size(); j++)
            {
                for (int k = 0; k < A[0].size() ; k++)
                {
                    res[i][k] += A[i][k]*B[j][k];
                }
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
        int row, col;
        cin >> row >> col;
        vector<vector<int>> A(row);
        for (int i = 0; i < row; i++)
        {
            A[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> A[i][j];
            }
        }
        cin >> row >> col;
        vector<vector<int>> B(row);
        for (int i = 0; i < row; i++)
        {
            B[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> B[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> result = ob.multiplyMatrix(A, B);

        if (result.size() == 0)
            cout << "-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends