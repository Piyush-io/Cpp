#include <iostream>
using namespace std;

int main()
{   
    int x ;
    cin >> x;
    int k;
    cin >> k;
    int z = (1 << (k-1)) ;
    if ((x&z) !=0)
    {   
        cout << "Yes";
    }
    else
        cout << "No" ;
    return 0;   
}