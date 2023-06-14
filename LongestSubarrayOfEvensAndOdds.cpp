#include <iostream>
using namespace std;

int longestsubarrayofalternatingoddandeven(int *arr , int n)
{
    int count = 1;
    int res = count;
    int previous = 0;
    if(arr[0] % 2 == 0)
    {
        previous = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if(previous == 0)
        {
            if(arr[i] % 2 != 0)
                count++;
            else
                res = max(res , count);
                count = 1;
                previous = 0;
        }
        else if(previous == 1)
        {
           if(arr[i] % 2 == 0)
                count++;
            else
                res = max(res , count);
                count = 1;
                previous = 0;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longestsubarrayofalternatingoddandeven(arr, n) << endl;
    return 0;
}