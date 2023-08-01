//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int targetsum = INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {   
            int sum = 0;
            for(int j = 0 ;  j < n ; j++)
            {
                sum += matrix[i][j];
            }
            targetsum = max(targetsum,sum);
        }
        for(int i = 0 ; i < n ; i++)
        {   
            int sum = 0;
            for(int j = 0 ;  j < n ; j++)
            {
                sum += matrix[j][i];
            }
            targetsum = max(targetsum,sum);
        }
        
        int operations = 0;
        
        for(int i = 0; i < n ; i++)
        {
            int curr_row_sum = 0;
            for(int j = 0 ; j < n ; j++)
            {
                curr_row_sum += matrix[i][j];
            }
            int diff = maxsum - curr_row_sum;
            operations += diff;
        }
        
        for(int i = 0; i < n ; i++)
        {
            int curr_cols_sum = 0;
            for(int j = 0 ; j < n ; j++)
            {
                curr_cols_sum += matrix[j][i];
            }
            int diff = maxsum - curr_cols_sum;
            operations += diff;
        }
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends