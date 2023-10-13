#include <iostream>

using namespace std;

class Num
{
private:
    int value;

public:
    Num(int val)
    {
        value = val;
    }

    Num operator++(int)
    {
        Num temp = *this;
        value++;
        return temp;
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Num num(5);

    cout << "Initial Value:" << endl;
    num.display();

    num++;
    cout << "After Increment:" << endl;
    num.display();

    return 0;
}