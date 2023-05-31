#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if ((n&(n-1)) == 0)
            cout << "Yes";
        else
            cout << "NO";
    }
}