#include <iostream>
using namespace std;

int ternary(int *arr, int si, int ei, int k)
{
    while (ei >= si)
    {
        int mid1 = si + (ei - si) / 3;
        int mid2 = ei - (ei - si) / 3;
        if (arr[mid1] == k)
        {
            return mid1;
        }
        else if (arr[mid2] == k)
        {
            return mid2;
        }
        else if (arr[mid1] > k)
        {
            ei = mid1-1;
        }
        else if(arr[mid2] < k)
        {
            si = mid2+1;
        }
        else
            si = mid1+1;
            ei = mid2-1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << ternary(arr, 0, 9, 6) << endl;
}