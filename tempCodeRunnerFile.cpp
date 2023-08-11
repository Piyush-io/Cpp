int i = hash(key);

            while (i != -1 && i != -2 && key != arr[i])
            {
                i = (i + 1) % HashSize;
            }

            if (arr[i] == key)
            {
                cout << "Alread Present" << endl;
                return false;
            }

            else
            {
                cout << "Inserted " << key << " in the table." << endl;
                arr[i] = key;
                size++;
                return true;
            }
        