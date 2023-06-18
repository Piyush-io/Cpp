#include <iostream>
using namespace std;

int missandrepeat(int arr[] , int n)
{
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
        {
            continue;
        }
        else if(arr[i] == arr[i+1])
        {
            cout << arr[i] << endl;
         }
        else
            cout << i << endl;
    }
    return 1;   
}

int main()
{
    int arr[] = {2, 3, 2, 1, 5};
    missandrepeat(arr , 5);
}