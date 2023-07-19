//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], long long low, long long mid, long long high)
    {
        int left = low;
        int right = mid + 1;
        vector<long long> temp;
        long long cnt = 0;
        while (left <= mid && right <= high)
        {

            if (arr[left] > arr[right])
            {
                cnt += (mid - left + 1);
                temp.push_back(arr[right++]);
            }
            else
                temp.push_back(arr[left++]);
        }

        while (left <= mid)
            temp.push_back(arr[left++]);
        while (right <= high)
            temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }

        return cnt;
    }

    long long mergesort(long long low, long long high, long long arr[])
    {

        long long cnt = 0;

        if (low < high)
        {

            int mid = low + (high - low) / 2;

            cnt += mergesort(low, mid, arr);
            cnt += mergesort(mid + 1, high, arr);
            cnt += merge(arr, low, mid, high);
        }
        return cnt;
    }

    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(0, N - 1, arr);
    }
};

//{ Driver Code Starts.

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends