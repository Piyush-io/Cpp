#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};
    cout << "The vector is: " << endl;
    for (int i : vector1)
    {
        cout << i << endl;
    }
}