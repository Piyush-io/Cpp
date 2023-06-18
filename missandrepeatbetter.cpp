#include <iostream>
using namespace std;

void repeating_missing(int arr[], int n)
{
    int repeating;
    int missing;
    for ( int i=0 ; i < n-1 ; i++ ) {
        int temp = arr[abs(arr[i])- 1];
        if (temp < 0 ) {
            repeating = abs(arr[i]);
            break;
        }
        arr[abs(arr[i])- 1] = -arr[abs(arr[i])- 1];
    }

    for (int i=0 ; i < n-1 ; i++) {
        if (arr[i] > 0 )
            missing = i+1;
    }
    cout << repeating << " " <<  missing << endl;
} 


int main()
{
    int arr[] = {2, 3, 2, 1, 5};
    repeating_missing(arr , 5);
}