// C++ program to remove recurring digits from
// a given number
#include <iostream>
using namespace std;

class Solution{
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> arr;
        
        int max = a[n-1];
        arr.push_back(max);
        for (int i = n-2; i >= 0 ; i--)
        {
            if (arr[i] > max)
            {
                arr.push_back(arr[i]);
                max = arr[i];
            }
        }
          return arr;
    }
};

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