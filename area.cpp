#include <iostream>
using namespace std;

#define PI 3.14285

class area
{
private:
    int base;
    int height;
    int length;
    int breadth;
    int radius;

public:
    void calculate(double base, double height);
    void calculate(int length, int breadth);
    void calculate(float radius);
};

void area::calculate(double base, double height)
{
    cout << "Area of the triangle is: " << 0.5 * base * height << endl;
}

void area::calculate(int length, int breadth)
{
    cout << "Area of the rectangle is: " << length * breadth << endl;
}

void area::calculate(float radius)
{
    cout << "Area of the circle is: " << PI * radius * radius << endl;
}

int main()
{
    area calculate_area;
    calculate_area.calculate(10.0, 5.0);
    calculate_area.calculate(10, 5);
    calculate_area.calculate(7.0);
    return 0;
}