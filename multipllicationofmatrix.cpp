//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int>> multiplyMatrix(const vector<vector<int>> &A, const vector<vector<int>> &B)
    {
        // code here
        if(A[0].size() != B.size())
        {
             return {};
        }
        vector<vector<int>> sum;
        for(int i=0;i<A.size();i++)
        {
            vector<int> row;
            for(int j=0;j<B[0].size();j++)
            {
                int mul = 0;
                for(int k=0;k<A[0].size();k++)
                {
                    mul += (A[i][k] * B[k][j]);
                }
                row.push_back(mul);
            }
            sum.push_back(row);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends