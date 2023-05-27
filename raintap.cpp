#include <iostream>
using namespace std;

class raintap
{
public:
    int findWater(int arr[], int n)
    {
        int res = 0;
        for (int i = 1; i < n-1 ; i++)
        {
            int L_MAX = arr[i];
            for (int j = 0; j < i ; j++)
            {
                L_MAX = max(arr[j],L_MAX);
            }
            int R_MAX = arr[i];
            for (int j = 0; j < n-1; j++)
            {
                R_MAX = max(arr[j],R_MAX);
            }
            res = res + (min(L_MAX,R_MAX) - arr[i]);
        }
        return res;
    }
};

int main()
{
    int arr[] = {3, 0, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    raintap rt;
    cout << rt.findWater(arr, n) << endl;
}