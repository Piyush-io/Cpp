#include <iostream>
#include <stdlib.h>

using namespace std;
class MyObject
{
public:
    int data;

    MyObject(int val)
    {
        data = val;
        cout << "MyObject constructor, data = " << data << endl;
    }

    void *operator new(size_t size)
    {
        cout << "Custom new operator called. Allocating " << size << " bytes" << endl;
        void *p = malloc(size);
        return p;
    }

    void operator delete(void *p)
    {
        cout << "Custom delete operator called" << endl;
        free(p);
    }
};

int main()
{
    MyObject *obj = new MyObject(42);

    cout << "Object data: " << obj->data << endl;

    delete obj;

    return 0;
}
