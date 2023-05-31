#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int n = a^b; //gives all the different bits in both numbers
    int result = 0;
    while (n!=0) //loop to count set bits using brian and kirringham
    {
        n = n & (n-1);
        result++;
    }

    cout << result << endl;
}