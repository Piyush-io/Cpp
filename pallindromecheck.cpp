#include <iostream>
#include <string>
using namespace std;

// Function declaration
bool isPalindrome(string str);

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input))
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}

// Function definition
bool isPalindrome(string str)
{
    int n = str.length();
    int l = 0;
    int r = n-1;
    while (l <= r)
    {
        if (str[l++] != str[r--])
        {
            return 0;
        }
    }
    return 1;
}
