#include <iostream>
#include <stack>
using namespace std;
/*
class twostacksusingarray
{
private:
    int *arr;
    int capacity;
    int cap1;
    int cap2;
    int top1;
    int top2;

public:
    twostacksusingarray(int x)
    {
        arr = new int[x];
        capacity = x;
        cap1 = x / 2;
        cap2 = x / 2;
        top1 = -1;
        top2 = (x / 2) - 1;
    }
    int size1()
    {
        return top1 + 1;
    }

    int size2()
    {
        return top2 + 1;
    }

    void push1(int x)
    {
        if (top1 == cap1 - 1)
        {
            cout << "Stack 1 is full";
        }
        top1++;
        arr[top1] = x;
    }

    void push2(int x)
    {
        if (top2 == cap2 - 1)
        {
            cout << "Stack 2 is full" << endl;
        }

        top2++;
        arr[top2] = x;
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is empty" << endl;
        }

        cout << "Popped element is : " << arr[top1] << endl;
        top1--;
    }

    void pop2()
    {
        if (top2 == ((capacity / 2) - 1))
        {
            cout << "Stack 2 is empty" << endl;
        }

        cout << "Popped element is : " << arr[top2] << endl;
        top2--;
    }

    ~twostacksusingarray()
    {
        delete[] arr;
        arr = nullptr;
    }
};
*/

class twostacksusingarray
{
private:
    int *arr;
    int capacity;
    int top1;
    int top2;

public:
    twostacksusingarray(int x)
    {
        arr = new int[x];
        capacity = x;
        top1 = -1;
        top2 = x;
    }
    int size1()
    {
        return top1 + 1;
    }

    int size2()
    {
        return capacity - top2;
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
    }

    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is empty" << endl;
        }

        cout << "Popped element is : " << arr[top1] << endl;
        top1--;
    }

    void pop2()
    {
        if (top2 == capacity)
        {
            cout << "Stack 2 is empty" << endl;
        }

        cout << "Popped element is : " << arr[top2] << endl;
        top2++;
    }

    ~twostacksusingarray()
    {
        delete[] arr;
        arr = nullptr;
    }
};

int main()
{
}