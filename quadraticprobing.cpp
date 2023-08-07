//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	// Function to fill the array elements into a hash table
	// using Quadratic Probing to handle collisions.
	int hashfunc2(int key, int hashSize, int i)
	{
		return (key + (i * i)) % hashSize;
	}
	int hashfunc(int key, int hashSize)
	{
		return (key % hashSize);
	}
	void QuadraticProbing(vector<int> &hash, int hashSize, int arr[], int N)
	{
		for (int i = 0; i < N; i++)
		{
			int temp = hashfunc(arr[i], hashSize);
			if (hash[temp] == -1)
			{
				hash[temp] = arr[i];
			}
			else
			{
				for (int j = 1; j < hashSize; j++)
				{
					temp = hashfunc2(arr[i], hashSize, j);
					if (hash[temp] == -1)
					{
						hash[temp] = arr[i];
						break;
					}
				}
			}
		}
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

		int N;
		cin >> N;
		int arr[N];

		for (int i = 0; i < N; i++)
			cin >> arr[i];

		vector<int> hash(hashSize, -1);
		Solution obj;
		obj.QuadraticProbing(hash, hashSize, arr, N);

		for (int i = 0; i < hashSize; i++)
			cout << hash[i] << " ";

		cout << endl;
	}
	return 0;
}

// } Driver Code Ends