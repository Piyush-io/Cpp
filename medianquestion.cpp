#include <iostream>
using namespace std;
//done
class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int v1[], int n1, int v2[], int n2)
    {
    int si = 0;
    int ei = n1;
    int mid_in_merged_array = (n1 + n2 + 1) / 2;
    while (si <= ei)
    {
        int mid = si + (ei-si) / 2;
        int sizeofleftpartofA = mid;
        int sizeofleftpartofB = mid_in_merged_array - mid;
        int leftA = (sizeofleftpartofA > 0) ? v1[sizeofleftpartofA - 1] : INT_MIN;
        int leftB = (sizeofleftpartofB > 0) ? v2[sizeofleftpartofB - 1] : INT_MIN;
        int rightA = sizeofleftpartofA < n1 ? v1[sizeofleftpartofA] : INT_MAX;
        int rightB = sizeofleftpartofB < n2 ? v2[sizeofleftpartofB] : INT_MAX;
        if (leftA <= rightB && leftB <= rightA)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return floor((max(leftA, leftB) + min(rightA, rightB)) / 2);
            }
            return max(leftA, leftB);
        }
        else if (leftA > rightB)
            ei = mid - 1;
        else
            si = mid + 1;
    }
    return 0;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}
// } Driver Code Ends