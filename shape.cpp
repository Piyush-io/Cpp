#include <iostream>
using namespace std;

class SHAPE
{
protected:
    double dimension1;
    double dimension2;

public:
    void getdata()
    {
        cout << "Enter dimension 1: ";
        cin >> dimension1;
        cout << "Enter dimension 2: ";
        cin >> dimension2;
    }

    virtual double calculateArea() = 0;

    void display()
    {
        cout << "Area: " << calculateArea() << endl;
    }
};

class TRIANGLE : public SHAPE
{
public:
    double calculateArea()
    {
        return 0.5 * dimension1 * dimension2;
    }
};

class RECTANGLE : public SHAPE
{
public:
    double calculateArea()
    {
        return dimension1 * dimension2;
    }
};

int main()
{
    int choice;

    cout << "Choose a shape\n1 - Triangle, 2 - Rectangle: ";
    cin >> choice;

    if (choice == 1)
    {
        TRIANGLE triangle;
        triangle.getdata();
        triangle.display();
    }
    else if (choice == 2)
    {
        RECTANGLE rectangle;
        rectangle.getdata();
        rectangle.display();
    }
    else
    {
        cout << "Invalid choice." << endl;
        return 1;
    }

    return 0;
}
