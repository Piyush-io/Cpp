//{ Driver Code Starts
#include <iostream>
#include <vector>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    int frequencyCount(vector<int>& arr,int N, int P)
    { 
        vector<int> v(P, 0);

        for (int i = 1; i < P; i++)
        {
            int count = 0;
            for (int j = 0; j < N; j++)
            {
                if (arr[j] == i)
                {
                    count++;
                }
            }
            v.push_back(count);
        }
        return v;
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
		vector<int> v = ob.frequencyCount(arr, N, P); 
		int size = v.size();
		//printing array elements
	    for (int i = 0; i < size ; i++) 
			cout << v[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends