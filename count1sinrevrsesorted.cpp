//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
    int left = 0;
    int right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == 1 && (mid == N - 1 || arr[mid + 1] == 0)) {
            return mid + 1;
        } else if (arr[mid] == 1) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0;
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
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends