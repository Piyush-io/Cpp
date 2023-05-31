#include <iostream>
using namespace std;

void tower(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        cout << "DISK " << n << " " << from << " to " << to << endl;
        return;
    }

    tower(n - 1, from, to, aux);
    cout << "DISK " << n << " " << from << " to " << to << endl;
    tower(n - 1, aux, from, to);
}

int main()
{
    tower(3, 'A', 'B', 'C');
}