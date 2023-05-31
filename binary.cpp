#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9};
    int n;
    cin >> n;
    int i = 0;
    int l = 8;
    while (i <= l)
    {
        int mid = (i + l) / 2;

        if (arr[mid] == n)
        {
            cout << mid;
            break;
        }

        else if (arr[mid] > n)
        {
            l = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
}