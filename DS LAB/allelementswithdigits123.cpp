//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 


// } Driver Code Ends
//User function template for C++

//Function to find all the numbers with only 1,2 and 3 in their digits.
void solve(string s){
    int value= to_integer(s); // converting string into integer value
    if(value>1e6){
        return;         //base case 
                    // if our value exceeds 10^6 than return 
    }
    mp[value]++;    // here value will be incrementing 
                // values will be combinations of 1s, 2ds,3s
    
    solve(s+'1');       //adding 1s to the given number i.e 11,111,1111,11111 etc
    solve(s+'2');       //adding 2s to the given number i.e 12,122,1222 etc 
    solve(s+'3');       // same for this as well
}

void findAll() {
    solve("1");  // passing 1
    solve("2"); // passing 2
    solve("3"); //passing 3
}

//{ Driver Code Starts.


int main()
{   
    findAll(); // find all such numbers whose digits are from set {1,2,3} from 1 to 1000000
    int t;
    cin>>t; 
    
    while(t--)
    {
        int n, flag=0;
        cin>>n; 
        
        int arr[n] ;
        
        for(int i=0;i<n;i++) // insert n elements
            cin >> arr[i]; 
        
        sort(arr,arr+n); // sort them
        
        for(int i = 0 ; i < n ; ++ i ) {
            if(mp[arr[i]]) { // if arr[i] is already there in the map then it satisfied else not 
                cout << arr[i] << " " ;
                flag=1;
            }
        }
        
        if(!flag)
            cout << "-1"; 
            
        cout<<endl;
    }
return 0;
}
// } Driver Code Ends