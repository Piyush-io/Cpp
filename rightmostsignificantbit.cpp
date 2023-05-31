#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int res = 0;
    cin >> m >> n;
    while (m > 0 && n > 0)
    {
        if ((m & 1) == (n & 1))
        {
            res++;
            m >>= 1;
            n >>= 1;
        }
        else
            break;
    }
    cout << res;
}