#include <iostream>
using namespace std;

class LIST 
{
    public:

    virtual void store(int value) = 0;
    virtual int retrieve() = 0;
};
class Stack : public LIST 
{
private:
    int stack[100];
    int top;

public:
    Stack() : top(-1) {}
    void store(int value) override 
    {
        if (top >= 99) {
            cout << "Stack Overflow\n";
            return;
        }
        stack[++top] = value;
        cout << "Value " << value << " stored in Stack" << endl;
    }

    int retrieve() override {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int value = stack[top--];
        cout << "Value " << value << " retrieved from Stack" << endl;
        return value;
    }
};

class Queue : public LIST {
private:
    int queue[100];
    int front, rear;

public:
    Queue() : front(-1), rear(-1) {}

    void store(int value) override {
        if (rear >= 99) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        queue[++rear] = value;
        cout << "Value " << value << " stored in Queue" << endl;
    }

    int retrieve() override {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int value = queue[front++];
        cout << "Value " << value << " retrieved from Queue" << endl;
        return value;
    }
};

int main() {
    Stack stack;
    Queue queue;
    stack.store(5);
    stack.store(10);
    stack.retrieve();
    stack.retrieve();
    stack.retrieve();

    queue.store(3);
    queue.store(7);
    queue.store(12);
    queue.retrieve();
    queue.retrieve();
    queue.retrieve();
    queue.retrieve();

    return 0;
}
