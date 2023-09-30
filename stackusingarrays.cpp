#include <iostream>
using namespace std;

class stack
{
private:
    int size;
    int capacity;
    int top;
    int *arr;

public:
    stack(int x)
    {
        size = 0;
        capacity = x;
        top = -1;
        arr = new int[x];
    }

    bool isfull()
    {
        return size == capacity - 1;
    }

    void push(int x)
    {
        if (isfull())
        {
            cout << "Limit reached, element cannot be added" << endl;
            return;
        }
        top++;
        arr[top] = x;
        size++;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element present" << endl;
        }

        cout << arr[top] << endl;
        top--;
        size--;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "No element present" << endl;
        }

        cout << "Top element is: " << arr[top] << endl;
        return;
    }

    ~stack()
    {
        delete[] arr;
    }
};

int main()
{
    stack s(5);
    s.pop();
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.push(40);
    s.push(50);
    s.push(60);
    s.peek();
    s.push(70);
    s.pop();
}