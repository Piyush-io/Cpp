#include <iostream>
#include <list>
using namespace std;

struct Myhash
{
    int bucket;
    list<int> *table;
    Myhash(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }

    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
        cout << key << " now added." << endl;
    }
    bool search(int key)
    {
        int i = key % bucket;
        for (int x : table[i])
        {
            if (x == key)
            {   
                cout << key << " is present." << endl;
                return true;
            }
        }
        cout << key << " is not present." << endl;
        return false;
    }
    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
        cout << key << " now removed." << endl;
    }
};

int main()
{
    Myhash hash1 = Myhash(7);
    hash1.insert(23);
    hash1.search(23);
    hash1.remove(23);
    hash1.search(23);
}