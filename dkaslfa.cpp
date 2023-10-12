#include <iostream>
using namespace std;
class abc;
class xyz
{
    int q;

public:
    void indata()
    {
        cout << "Enter the value of q: ";
        cin >> q;
    }
    friend void big(abc, xyz);
};
class abc
{
    int p;

public:
    void getdata()
    {
        cout << "Enter the value of p: ";
        cin >> p;
    }
    friend void big(abc, xyz);
};
void big(abc a, xyz x)
{
    int y;
    y = a.p > x.q ? a.p : x.q;
    cout << y << " is a greater number";
}
int main()
{
    abc a;
    xyz x;
    a.getdata();
    x.indata();
    big(a, x);
}
