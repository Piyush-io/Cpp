#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int roll_no;
    string name;

public:
    void get_data(void);
    void display(void);
};

void student::get_data(void)
{
    cout << "\nEnter name :";
    cin >> name;
    cout << "\nEnter roll no :";
    cin >> roll_no;
}

void student::display(void)
{
    cout << " Name : " << name << endl;
    cout << " Roll No : " << roll_no << endl;
}

class exam : public student
{
protected:
    int marks[6];

public:
    void getmarks(void);
    void putmarks(void);
};

void exam::getmarks(void)
{
    for (int i = 0; i < 6; i++)
    {
        cout << "\nEnter marks in subject " << i + 1 << " :";
        cin >> marks[i];
    }
}

void exam::putmarks(void)
{
    for (int i = 0; i < 6; i++)
    {
        cout << "\nMarks in subject " << i + 1 << " :" << marks[i];
    }
}

class result : public exam
{
protected:
    int total_marks;

public:
    result()
    {
        total_marks = 0;
    }
    void calculatemarks(void);
    void show_marks(void);
};

void result::calculatemarks(void)
{
    get_data();
    getmarks();
    for (int i = 0; i < 6; i++)
    {
        total_marks += marks[i];
    }
}

void result::show_marks(void)
{
    display();
    putmarks();
    cout << "\nTotal Marks are: " << total_marks << endl;
}

int main()
{
    result Piyush;
    Piyush.calculatemarks();
    Piyush.show_marks();
}