#include <iostream>
#include <string.h>
using namespace std;

void subsets(string str, string curr, int si)
{
    if (si == str.length())
    {
        cout << curr << endl;
        return;
    }

    subsets(str, curr, si + 1);
    subsets(str, curr + str[si], si + 1);
}

int main()
{
    subsets("PIYUSH", "", 0);
}