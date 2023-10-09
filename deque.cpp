#include <iostream>
using namespace std;

class Deque
{
private:
    int *arr;
    int front;
    int size;
    int capacity;

public:
    Deque(int n)
    {
        arr = new int[n];
        front = 0;
        size = 0;
        capacity = n;
    }

    bool isfull()
    {
        return size == capacity - 1;
    }

    bool isempty()
    {
        return size == 0;
    }

    int getrear()
    {
        if (isempty())
        {
            return -1;
        }
        return (front + size - 1) % capacity;
    }

    int getfront()
    {
        if (isempty())
        {
            return -1;
        }
        return front;
    }

    void insertrear(int x)
    {
        if (isfull())
        {
            cout << "Deque is full." << endl;
            return;
        }

        int rear = getrear();
        rear++;
        arr[rear] = x;
        size++;
    }

    void insertfront(int x)
    {
        if (isfull())
        {
            cout << "Deque is full." << endl;
            return;
        }

        front = (front + capacity - 1) % capacity;
        arr[front] = x;
        size++;
    }

    int deleterear()
    {
        if (isempty())
        {
            cout << "Deque is empty." << endl;
            return -1;
        }
        size--;
        return arr[getrear()];
    }

    int deletefront()
    {
        if (isempty())
        {
            cout << "Deque is empty." << endl;
            return -1;
        }
        int x = arr[front];
        front = (front + 1) % capacity;
        size--;
        return x;
    }

    ~Deque()
    {
        delete[] arr;
    }
};


int main()
{
    Deque dq(5);

    // Function calls
    cout << "Insert element at rear end  : 5 \n";
    dq.insertrear(5);

    cout << "insert element at rear end : 10 \n";
    dq.insertrear(10);

    cout << "get rear element "
         << " " << dq.getrear() << endl;

    dq.deleterear();
    cout << "After delete rear element new rear"
         << " become " << dq.getrear() << endl;

    cout << "inserting element at front end \n";
    dq.insertfront(15);

    cout << "get front index "
         << " " << dq.getfront() << endl;

    dq.deletefront();

    cout << "After delete front element new "
         << "front become " << dq.getfront() << endl;
    return 0;
}
