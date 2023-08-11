#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Myhash
{
public:
    int *arr;
    int HashSize;
    int size;
    Myhash(int capacity)
    {
        HashSize = capacity;
        size = 0;
        arr = new int[HashSize];
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = -1;
        }
    }

    int hash(int key)
    {
        return key % HashSize;
    }

    bool search(int key)
    {
        cout << "SEARCHING " << key << " NOW..........." << endl;
        int hk = hash(key);
        int i = hk;
        while (i != -1)
        {
            if (arr[i] == key)
            {
                cout << "Present" << endl;
                return true;
            }
            i = (i + 1) % HashSize;
            if (i == hk)
            {
                cout << "Not Present" << endl;
                return false;
            }
        }
        return false;
    }

    bool insert(int key)
    {
        cout << "INSERTING " << key << " NOW..........." << endl;
        if (size == HashSize)
        {
            cout << "Full Capacity" << endl;
            return false;
        }

        int i = hash(key);

        while (i != -1 && i != -2 && arr[i] != -1)
        {
            i = (i + 1) % HashSize;
        }

        if (arr[i] == key)
        {
            cout << "Already Present" << endl;
            return false;
        }
        else
        {
            cout << "Inserted " << key << " in the table." << endl;
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool erase(int key)
    {
        cout << "DELETING " << key << " NOW..........." << endl;
        int hk = hash(key);
        int i = hk;
        while (i != -1 && arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                cout << "Deleted " << key << " from the table." << endl;
                return true;
            }
            i = (i + 1) % HashSize;
            if (i == hk)
            {
                cout << "Not Present" << endl;
                return false;
            }
        }
        cout << "Not Present" << endl;
        return false;
    }
};

int main()
{
    Myhash H1 = Myhash(5);
    H1.insert(53);
    H1.search(53);
    H1.erase(52);
    H1.erase(53);

    return 0;
}
