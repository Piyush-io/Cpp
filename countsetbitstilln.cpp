#include <iostream>
using namespace std;
/*
int greatestpowerof2(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return x;
}

int solve(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int g = greatestpowerof2(n);
    int i = (1 << (g - 1)) * g;
    int j = 1 << g;

    return i + n - j + 1 + solve(n - j);
*/
int solve(int N)
{
	int two = 2, ans = 0;
	int n = N;
	while (n) {
		ans += (N / two) * (two >> 1);
		if ((N & (two - 1)) > (two >> 1) - 1)
			ans += (N & (two - 1)) - (two >> 1) + 1;
		two <<= 1;
		n >>= 1;
	}
	return ans;
}

int main()
{
    int n;
    cin >> n;
    int result = solve(n);
    cout << "Total set bits till n is " << result << endl;
}


