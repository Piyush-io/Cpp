#include <iostream>
using namespace std;

void construct_lps(string str, int *arr)
{
    if (str.length() == 0)
    {
        arr[0] = 0;
        return;
    }

    arr[0] = 0;
    int i = 1;
    int len = 0;
    while (i < str.length())
    {
        if (str[i] == str[len])
        {
            len++;
            arr[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                arr[i] = 0;
                i++;
            }
            else
            {
                len = arr[len - 1];
            }
        }
    }
    return;
}

int main()
{
    string str = "abacabad";
    int lps[str.length()];
    construct_lps(str, lps);
    for (int i = 0; i < str.length(); i++)
    {
        cout << lps[i] << " ";
    }
    cout << endl;
    return 0;
}