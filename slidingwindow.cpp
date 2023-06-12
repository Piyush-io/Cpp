#include <iostream>
using namespace std;

int slidingwindow(int *arr, int n, int k)
{
    int maxsum;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i]; // calculating sum of first k terms
    }

    maxsum = sum; // taking sum as maxsum till now
    for (int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k]; // adding next element and removing the first element of previous part
        maxsum = max(maxsum, sum);  //taking max of maximum till now and sum of the new part of the array
    }
    return maxsum;  //returning the maximum sum
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = slidingwindow(arr, n, k);
    cout << sum << endl;
}