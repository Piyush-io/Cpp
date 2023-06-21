#include <iostream>
using namespace std;


long long sqrtof(long long n)
{
    long long low = 0;
    long long high = n/2;
    long long res;
    while (low<=high)
    {
        long long mid = low+(high-low)/2;
        res = mid*mid;
        if(res == n)
        {
            return mid;
        }
        else if(res > n)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
            res = mid;
        }
    }
    return res;
}

int main()
{
    long long n;
    cin >> n;
    cout << sqrtof(n) << endl;
}