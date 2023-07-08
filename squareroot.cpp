#include <iostream>
using namespace std;

int floorSqrt(int x)
{ // Base cases
    int res = sqrt(x);
    return (int)res;
}

int main()
{
    long long n;
    cin >> n;
    cout << floorSqrt(n) << endl;
}