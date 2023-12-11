//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N)
    {
        long res = 0;
        long curr = 0;
        
        if(K>N)
            return 0;
            
        for(int i = 0 ; i < K ; i++)
        {
            curr += Arr[i];
        }
        
        res = max(res , curr);
        for(int i = K ; i < N ; i++)
        {
            curr = curr - Arr[i-K];
            curr += Arr[i];
            res = max(res, curr);
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends