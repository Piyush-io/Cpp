#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5, 6, 7};
    int n;
    cin >> n;
    int i = 0;
    int l = 8;
    while (i <= l)
    {
        int mid = (i + l) / 2;

        if (arr[mid] > n)
        {
            l = mid - 1;
        }
        else if(arr[mid] < n)
        {
            i = mid + 1;
        }
        else
        {
            if ( mid == 0 || arr[mid] != arr[mid-1])
            {
                cout << mid << endl;
                break;
            }
            else
                l = mid-1;
        }
    }
}