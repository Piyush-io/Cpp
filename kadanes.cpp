//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        // Your code here
        long long res = arr[0];
        long long currmax = arr[0];
        for(int i = 1 ; i < n ; i++)
        {
            currmax = max(currmax + static_cast<long long>(arr[i]), static_cast<long long>(arr[i]));
            
            if(currmax > res)
                res = currmax;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends