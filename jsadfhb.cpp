#include <iostream>
#include <string.h>
using namespace std;

int pallin(string str, int si, int ei)
{
    if (str[si] != str[ei])
    {
        return 0;
    }
    pallin(str, si + 1, ei - 1);
    return 1;
}

int main()
{
    cout << pallin("GEEEG", 0, 4);
}