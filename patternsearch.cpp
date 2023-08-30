//{ Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	for(int i = 0 ; i < txt.length(); i++)
    	{
    	    if(txt[i] == pat[0])
    	    {   
    	        bool temp = true;
                for (int j = 0; j < pat.length(); j++)
                {
                    if (pat[j] != txt[i + j])
                    {   
                        temp = false;
                        break;
                    }
                }
                if (temp)
                    return true;
    	    }
    	}
    	return false;
    }
};


//{ Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}

// } Driver Code Ends