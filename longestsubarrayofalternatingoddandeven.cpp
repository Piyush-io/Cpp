#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    int maxcount = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        if ((arr[j] % 2 == 0 && arr[j + 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j + 1] % 2 == 0))
        {
            count++;
            if (count > maxcount)
            {
                maxcount = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << maxcount;
    return 0;           
}