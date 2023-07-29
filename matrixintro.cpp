//{ Driver Code Starts
#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int> > sumMatrix( const vector<vector<int> >& vect1, const vector<vector<int> >& vect2)
    {
    
    vector<vector <int>> v;    
        
    for (int i = 0; i < vect1.size(); i++)
    {
        vector <int> temp;
        for (int j = 0; j < vect1[i].size(); j++)
        {
            temp.push_back(vect1[i][j] + vect2[i][j]);
        }
        v.push_back(temp);
    }
    return v;
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
        vector<vector<int> > result = ob.sumMatrix(A,B);
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