//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to fill the array elements into a hash table
    // using Linear Probing to handle collisions.

    bool ispresent(vector<int> temp, int key)
    {
        int size = temp.size();
        for (auto x : temp)
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }

    int hashfunc(int num, int hashsize)
    {
        return num % hashsize;
    }

    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        // Your code here
        vector<int> res(hashSize, -1);
        for (int i = 0; i < sizeOfArray; i++)
        {
            if (ispresent(res, arr[i]) == 0)
            {
                int hash = hashfunc(arr[i], hashSize);
                if (res[hash] == -1)
                {
                    res[hash] = arr[i];
                }
                else if (res[hash] != -1)
                {
                    if (res[hash] == arr[i])
                    {
                        continue;
                    }
                    else
                    {
                        for (int j = 1; j < hashSize; j++)
                        {
                            int sechash = (hash + j) % hashSize;
                            if (res[sechash] == -1 || res[sechash] == arr[i])
                            {
                                res[sechash] = arr[i];
                                break;
                            }
                            else
                                continue;
                        }
                    }
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hashSize;
        cin >> hashSize;

        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];

        vector<int> hash;
        Solution obj;
        hash = obj.linearProbing(hashSize, arr, sizeOfArray);

        for (int i = 0; i < hashSize; i++)
            cout << hash[i] << " ";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends