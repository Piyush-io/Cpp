#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    int chr_count[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        chr_count[str[i] - 'a']++;
    }
    cout << "Character"
         << "\t"
         << "Count" << endl;
    for (int i = 0; i < 26; i++)
    {
        if (chr_count[i] > 0)
        {
            cout << (char)(i + 'a') << "\t" << chr_count[i] << endl;
        }
    }
}