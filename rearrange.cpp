#include <iostream>
using namespace std;   

void rearrange(int *arr, int N)
{   
    int temparr[N];
    for (int i = 0; i < N; i++)
    {
        temparr[i] = arr[i];
    }
    int temp;
    for (int i = 0; i < N; i++)
    {   
        temp = temparr[i];
        arr[i] = temparr[temp];
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int arr[] = {4,0,2,1,3}; // initalising the array
    rearrange(arr, 5);
}