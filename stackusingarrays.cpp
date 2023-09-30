#include <iostream>
#include <vector>
using namespace std;

class stack
{
private:
    int size;
    int capacity;
    vector<int> res; //  int *arr;

public:
    stack(int x)
    {
        size = 0;
        capacity = x;
    }

    bool isfull()
    {
        return res.size() == capacity;
    }

    void push(int x)
    {
        res.push_back(x);
        size++;
    }

    void pop()
    {
        cout << res.back() << endl;
        res.pop_back();
        size--;
    }

    void peek()
    {
        cout << "Top element is: " << res.back() << endl;
        return;
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