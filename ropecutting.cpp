#include <iostream>
#include <math.h>
using namespace std;

int ropecutting(int n, int a, int b, int c)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 0;
    }

    int res = max(ropecutting(n - a, a, b, c),
                  max(ropecutting(n - b, a, b, c),
                      ropecutting(n - c, a, b, c)));
    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main()
{

    cout << "The maximum no of peices are: " << ropecutting(5, 2, 5, 1);
}