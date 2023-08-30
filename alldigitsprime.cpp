//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    
    bool isPrimeDigit(char digit) 
    {
        return digit == '2' || digit == '3' || digit == '5' || digit == '7';
    }
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        int count = 0;
        int num = 1;
    
        while (count < n) 
        {
            string numStr = to_string(num);
            bool allPrimeDigits = true;
            
            for (char digit : numStr)
            {
                if (!isPrimeDigit(digit))
                {
                    allPrimeDigits = false;
                    break;
                }
            }
            
            if (allPrimeDigits) 
            {
                count++;
            }
        
        num++;
        }
    return num - 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends