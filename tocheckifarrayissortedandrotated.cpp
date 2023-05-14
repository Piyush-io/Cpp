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
    bool checkRotatedAndSorted(int arr[], int num){
    bool res1 = true; // initialize to false
    bool res2 = true; 
    int min = 0;
    for(int i = 0 ; i < num ; i++)
        if(arr[i] < arr[min])
            min = i;

    for(int i = 0 ; i < min ; i++)
    {
        if(arr[i] > arr[i+1])
            res1 = false;
            break;
    }
    
    for(int i = min ; i < num ; i++)
    {
        if(arr[i] > arr[i+1])
            res2 = false;
            break;
    }
    
    if(res1 && res2 && arr[num-1] < arr[0])
        return true;
    else 
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