//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int n)
    {   
        int res = 0;
        if(arr[0] > arr[n-1])
            {
                for(int i= 0 ; i < n-1 ; i++ )
                    if(arr[i] > arr[i+1])
                        res++;
            }
            if(res == 1)
            return true;
            
        res = 0;
        if(arr[0] < arr[n-1])
            {
                for(int i= 0 ; i < n-1 ; i++ )
                    if(arr[i] < arr[i+1])
                        res++;
            }
            if(res == 1)
                return true;
        
        return false;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}
// } Driver Code Ends