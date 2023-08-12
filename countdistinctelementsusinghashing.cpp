#include <iostream>
#include <unordered_set>
using namespace std;

// This function prints all distinct elements
int countDistinct(int arr[], int n)
{
    // Creates an empty hashset
    unordered_set<int> s(arr,arr+n);
    return s.size();
}

// Driver program to test above function
int main()
{
    int arr[] = { 6, 10, 5, 4, 9, 120, 4, 6, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinct(arr, n);
    return 0;
}