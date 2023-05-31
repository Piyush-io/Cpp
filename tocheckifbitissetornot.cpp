#include <iostream>
using namespace std;

int main()
{   
    int x ;
    cin >> x;
    int k;
    cin >> k;
    int z = (x >> (k-1)) ;
    if ((1&z) !=0)
    {   
        cout << "Yes";
    }
    else
        cout << "No" ;
    return 0;   
}