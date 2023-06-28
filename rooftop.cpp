//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int arr[], int n)
    {
        // Your code here
        int res = 0;
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i-1])
            {
                count++;
            }
            else
            {
                res = max(res, count);
                count = 0;
            }
        }
        res = max(res , count);
        return res;
    }
};

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}
// } Driver Code Ends

/* //{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(int arr[], int n)
    {
        // Your code here
        int res = 0;
        int count = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                count++;
                res = max(res, count);
            }
            else if (arr[i] == arr[i + 1] || arr[i] > arr[i + 1])
            {
                res = max(res, count);
                count = 0;
            }
        }
        if (res == 0)
            return count;
        else
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

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.maxStep(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
*/