//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        long res = 0;
        long len = 0;
        long less = 0;
    
        for (int i = 0; i < n; i++) {
            if (a[i] <= R && a[i] >= L) {
                len++;
                long y = (less * (less + 1)) / 2;
                res -= y;
                less = 0;
            }
            if (a[i] < L) {
                len++;
                less++;
            }
            if (a[i] > R) {
                long x = ((len * (len + 1)) / 2);
                long y = (less * (less + 1)) / 2;
                res -= y;
                res += x;
                len = 0;
                less = 0;
            }
        }
    
        long x = ((len * (len + 1)) / 2);
        long y = (less * (less + 1)) / 2;
        res -= y;
        res += x;
        len = 0;
        less = 0;
    
        return res;
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends