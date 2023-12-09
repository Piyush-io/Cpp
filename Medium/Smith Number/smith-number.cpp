//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  
    int sumOfDigits(int num) {
        int sum = 0;
        
        while(num > 0) {
            sum += (num % 10);
            num /= 10;
        } 
        
        return sum;
    }

    int sumPrimes(int n) {
        int sum = 0, factors = 0, i = 2;
        while(n > 1) {
            if(n % i == 0) 
            {
                sum += sumOfDigits(i);
                factors++;
                n /= i;
            } 
            else
                i++;
        }
        
        return factors <= 1 ? 0 : sum;
    }

    int smithNum(int n) {
        int digitsum = sumOfDigits(n);
        int primesum = sumPrimes(n);
        return digitsum == primesum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends