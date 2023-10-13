#include <iostream>
#include <string>
#include <cstring>
using namespace std; // Add this line to use the standard namespace

class String
{
private:
    int length;
    char *arr;

public:
    String() : length(0), arr(nullptr) {}
    String(const char *S);
    String(const String &s);
    String &operator=(const String &s); // Add copy assignment operator
    ~String() { delete[] arr; }

    friend String operator+(const String &s, const String &t);
    friend bool operator<=(const String &s, const String &t);
    friend void show(const String s);
};

String &String::operator=(const String &s)
{
    if (this == &s)
        return *this;

    delete[] arr;

    length = s.length;
    arr = new char[length + 1];
    strcpy(arr, s.arr);

    return *this;
}

String::String(const char *S)
{
    length = strlen(S);
    arr = new char[length + 1];
    strcpy(arr, S);
}

String::String(const String &s)
{
    length = s.length;
    arr = new char[length + 1];
    strcpy(arr, s.arr);
}

String operator+(const String &s, const String &t)
{
    String temp;
    temp.length = s.length + t.length;
    temp.arr = new char[temp.length + 1];
    strcpy(temp.arr, s.arr);
    strcat(temp.arr, t.arr);
    return temp;
}

bool operator<=(const String &s, const String &t)
{
    return s.length <= t.length;
}

void show(const String s)
{
    if (s.arr)
        cout << s.arr << endl;
    else
        cout << "Empty String" << endl;
}

int main()
{
    String S1, S2, S3;
    string s;
    cout << "Enter string 1: ";
    cin >> s;
    S1 = s.c_str();
    cout << "Enter string 2: ";
    cin >> s;
    S2 = s.c_str();
    cout << "Enter string 3: ";
    cin >> s;
    S3 = s.c_str();

    String t1, t2, t3;
    t1 = S1;
    t2 = S2;
    t3 = S1 + S3;

    cout << "\nt1 = ";
    show(t1);
    cout << "\nt2 = ";
    show(t2);
    cout << "\nt3 = ";
    show(t3);

    if (t1 <= t3)
    {
        show(t1);
        cout << "is smaller than ";
        show(t3);
    }
    else
    {
        show(t3);
        cout << "is smaller than";
        show(t1);
    }

    return 0;
}
