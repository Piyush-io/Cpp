#include <iostream>
#include <string>
using namespace std;

//
class student
{
protected:
    string name;
    int roll_no;
    string sex;

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
    cout << "\nEnter sex :";
    cin >> sex;
}

void student::display(void)
{
    cout << " Nmae : " << name << endl;
    cout << " Roll No : " << roll_no << endl;
    cout << " Sex : " << sex << endl;
}

class physically_fit : public student
{
    int height;
    int weight;

public:
    void getdata(void);
    void display_data(void);
};

void physically_fit::getdata(void)
{
    get_data();
    cout << "\nEnter height :";
    cin >> height;
    cout << "\nEnter weight :";
    cin >> weight;
}

void physically_fit::display_data(void)
{
    display();
    cout << " Height : " << height << endl;
    cout << " Weight : " << weight << endl;
}
int main()
{
    physically_fit S1;
    S1.getdata();
    S1.display_data();
}