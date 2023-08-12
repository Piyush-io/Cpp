//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int sumExists(int arr[], int N, int sum);

// } Driver Code Ends
// User function Template for C++

// You need to complete this function.
// Function to check if there is a pair with the given sum in the array.
int sumExists(int arr[], int N, int sum)
{
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        s.insert(arr[i]);
    }

    for (auto i = s.begin(); i != s.end(); i++)
    {
        int x = *i;
        if (s.find(sum - x) != s.end())
        {
            if (s.find(sum - x) == x)
            {
                continue;
            }
            return true;
        }
    }
    return false;
}

//{ Driver Code Starts.

int main()
{

    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];
        int sum;
        cin >> sum;

        cout << sumExists(arr, N, sum) << endl;
    }
    return 0;
}

// } Driver Code Ends