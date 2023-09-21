#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    string branch;
    float marks[5];

public:
    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Marks in 5 Subjects: ";
        for (int i = 0; i < 5; ++i)
        {
            cin >> marks[i];
        }
    }

    void displayData()
    {
        float totalMarks = 0;
        for (int i = 0; i < 5; ++i)
        {
            totalMarks += marks[i];
        }

        float percentage = (totalMarks / 500) * 100;
        if (percentage >= 70)
        {
            cout << "Student Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Branch: " << branch << endl;
            cout << "Total Percentage: " << percentage << "%" << endl;
        }
        return;
    }
};

int main()
{
    Student students[5];

    cout << "Enter Data for 5 Students:\n";
    for (int i = 0; i < 5; ++i)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].getData();
    }

    cout << "\nStudents with 70% or higher percentage:\n";
    for (int i = 0; i < 5; ++i)
    {
        students[i].displayData();
    }

    return 0;
}
