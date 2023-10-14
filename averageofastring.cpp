#include <bits/stdc++.h>
#include <string>
using namespace std;

int stringavg(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i];
    }

    double average = sum / s.length();
    return floor(average);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string temp;
        cin >> temp;
        cout << stringavg(temp) << endl;
    }
    return 0;
}