#include <iostream>
using namespace std;

class stack
{
private:
    int *arr;
    int *next;
    int *top;
    int freespot;

public:
    stack(int n, int k)
    {
        arr = new int[n];
        top = new int[k];
        next = new int[n];
        memset(top, -1, k);
        for (int i = 0; i < n - 1; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        freespot = 0;
    }

    void push(int x, int m)
    {
        int index = freespot;
        freespot = next[index];
        arr[index] = x;
        next[index] = top[m - 1];
        top[m - 1] = index;
    }

    int pop(int m)
    {
        int index = top[m - 1];
        top[m - 1] = next[index];
        next[index] = freespot;
        freespot = index;
        cout << arr[index] << endl;
    }

    ~stack()
    {
        delete[] arr;
        delete[] top;
        delete[] next;
    }
};

int main()
{
    stack s(6, 3);
    s.push(10, 1);
    s.push(20, 1);
    s.push(30, 2);
    s.push(40, 2);
    s.pop(2);
    s.pop(1);
    s.pop(1);
}