#include <iostream>
using namespace std;

int repeat(int *arr, int n)
{
    int slow = arr[0] + 1;
    int fast = arr[0] + 1;
    do
    {
        slow = arr[slow] + 1;
        fast = arr[arr[fast] + 1] + 1;
    } while (slow != fast);

    slow = arr[0]+1;
    while (slow != fast)
    {
        fast = arr[fast] + 1;
        slow = arr[slow] + 1;
    }
    return slow - 1;
}

int main()
{
    int arr[] = {1, 3, 2, 4, 6, 5, 7, 3}, n = 8;
    cout << repeat(arr, n);
    return 0;
}