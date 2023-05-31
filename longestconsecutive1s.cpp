// C++ program to find length of the longest
#include<iostream>
using namespace std;

int maxConsecutiveOnes(int x)
{
	int count = 0;
	// Count the number of iterations to
	// reach x = 0.
	while (x!=0)
	{
		// This operation reduces length of every sequence of 1s by one.
		x = (x & (x << 1));
		count++;
	}
	return count;
}

// Driver code
int main()
{
	// Function Call
	cout << maxConsecutiveOnes(223) << endl;
	return 0;
}
