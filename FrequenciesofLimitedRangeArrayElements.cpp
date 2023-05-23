//{ Driver Code Starts
#include<iostream>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& A,int N, int P)
    { 
        vector<int> freq(N, 0); // Initialize frequency vector

        for (int i = 0; i < A.size(); i++) 
        {
            if (A[i] > 0 && A[i] <= N) {
                freq[A[i] - 1]++;
            }
        }

        for(int i = 0 ; i < N ; i++)
        {
            A[i] = freq[i];
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends