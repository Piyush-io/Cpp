//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        int i = 0;  // index maintained for array 1
        int j = 0;  // index maintained for array 2
        int k = n-1;  //indexing from last element of array1
        while (i < n && j < m)
        {
            if (arr2[j] < arr1[i])
            {
                swap(arr2[j], arr1[k--]);  // if an element is smaller than the smallest element of the other array then it would also be smaller than the largest element of the first array
                                           // that is why we replace it with the biggest element
                                           // we update k becuase the previous element would become the largest in that array
                j++;
            }
            else
                i++;
        }
        sort(arr1 , arr1+n);
        sort(arr2 , arr2+m);
    }
};

//{ Driver Code Starts.

int main()
{
    int n, m;
    cin >> n >> m;

    long long arr1[n], arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    Solution ob;
    ob.merge(arr1, arr2, n, m);

    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";

    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";

    cout << endl;
    return 0;
}

// } Driver Code Ends