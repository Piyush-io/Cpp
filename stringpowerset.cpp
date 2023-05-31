#include <iostream>
using namespace std;

int main()
{
	char str[] = {'a', 'b', 'c'};
	int size = 1 << 3; // calculating number of elements for given set
	cout << "Number of elements in power set of str is: " << size << endl;

	for (int i = 0; i < size; i++) // starting loop for every element number in the power set
	{
		for (int j = 0; j < 8; j++) // loop for first 8 bits of every element number
		{
			int temp = 1 << j;	 // creating a number with only j as set bit
			if ((i & temp) != 0) // checking if j bit is set for that element number
			{
				cout << str[j]; // since the jth bit is set we print jth element from the given set
			}
			else
				continue; // if it is not set we continue to next bit
		}

		cout << endl;
		// loop end, we go to next element number
	}
}