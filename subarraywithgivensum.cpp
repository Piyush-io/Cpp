#include <iostream>
using namespace std;

void subsum(int *arr, int n, int k)
{
    int si = 0;
    int ei = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum < k)
        {
            ei++;
            sum += arr[ei];
        }
        else if(sum > k)
        {
            si++;
            sum -= arr[si];
            si++;
        }
        else if(sum == k)
            break;
    }
    cout << si << " to " << ei << endl;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subsum(arr, n, k);
    return 0;
}