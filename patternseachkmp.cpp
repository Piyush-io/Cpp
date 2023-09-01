//{ Driver Code Starts
//Initial Template for C++

// C++ program for implementation of KMP pattern searching 
// algorithm 
#include <bits/stdc++.h> 

using namespace std;


// } Driver Code Ends
//User function Template for C++


//Function to fill lps[] for given patttern pat[0..M-1].
void computeLPSArray(string pat, int M, int* arr) 
{ 
	if (pat.length() == 0)
    {
        arr[0] = 0;
        return;
    }

    arr[0] = 0;
    int i = 1;
    int len = 0;
    while (i < pat.length())
    {
        if (pat[i] == pat[len])
        {
            len++;
            arr[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                arr[i] = 0;
                i++;
            }
            else
            {
                len = arr[len - 1];
            }
        }
    }
    return;
} 

//Function to check if the pattern exists in the string or not.
bool KMPSearch(string pat, string txt) 
{
    int M = pat.length();
    int N = txt.length();
    int i = 0;
    int j = 0;
    int lps[M];
    computeLPSArray(pat , M , lps);
    while(i < N)
    {
        if(txt[i] == pat[j])
        {
            i++;
            j++;
        }
        if(j == M)
        {
            return true;
        }
        else if(i < N && pat[j] != txt[i])
        {
            if(j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j-1];
            }
        }
    }
    return false;
}

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{ 
    int t;
    std::cin >> t;
    
    while(t--){
        string s, pat;
        cin >> s >> pat;
        if(KMPSearch(pat, s)){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    
	return 0;
} 

// } Driver Code Ends