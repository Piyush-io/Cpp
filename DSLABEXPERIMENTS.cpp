#include <iostream>
using namespace std;
void findMissingElements(int arr[], int n)
{
    bool present[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 1 && arr[i] <= n)
            present[arr[i]] = true;
    }
    cout << "Missing elements are: ";
    for (int i = 1; i <= n; i++)
    {
        if (!present[i])
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter distinct elements separated by spaces: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << endl;
    findMissingElements(arr, n);
    return 0;
}
