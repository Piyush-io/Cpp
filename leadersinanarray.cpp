//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <iostream>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        // Code here
        vector<int> arr;
        int max = a[n - 1];
        int count = 1;
        arr.push_back(max);
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] >= max)
            {
                arr.push_back(a[i]);
                max = a[i];
                count++;
            }
        }
        reverse(arr.begin() , arr.end());
        return arr;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends