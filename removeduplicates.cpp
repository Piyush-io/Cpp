#include <iostream>
using namespace std;

int removedup(int *arr , int n)
{
    int res = 1; //result variable
    for (int i = 1; i < n; i++)
    {
        if (arr[i+1] != arr[i]) //checks if the element before it is same or not
        {
            res++;
        }
    }
    return res;
}

int main ()
{
    int arr[] = {10,20,20,30,30,30,30}; //initalising the array
    cout << removedup(arr , 7) << endl; //fucntion call and printing simultaneously
}