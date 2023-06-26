#include <iostream>
using namespace std;

class solution
{
public:
    bool sumpair(int *arr, int n , int rsum)
    {
        int l = 0;
        int r = n - 1;
        int sum;
        while (l < r)
        {
            sum = arr[l] + arr[r];
            if ( sum == rsum)
            {
                return true;
            }
            else if ( sum > rsum )
            {
                r--;
            }
            else if( sum < rsum)
            {
                l++;
            }
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    solution ob;
    if (ob.sumpair(a, n ,k))
    {
        cout << "present" << endl;
    }
    else
        cout << "not present" << endl;
    return 0;
}