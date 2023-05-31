#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; i < n; i++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        if (count % 2 != 0)
        {
            cout << arr[i] << " " << count;
            break;
        }
    }
}