// starting sorting
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {10, 5 , 2, 20};
    sort(arr , arr+4); //function call with iterators passed of array start and array end
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    sort(arr , arr+4 , greater<int>()); 
    //another call to show the third parameter of the function which allows us to specify how we want the function to compare elements
    //here greater<int>() is a function that basically helps in arranging array in reverse order
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}