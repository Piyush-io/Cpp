//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
    class Node
    {   
        public:
        int key;
        int value;
        Node *next;
        Node *prev;
        Node(int x, int y) 
        {
            key = x;
            value = y;
            prev = next = nullptr;
        }
    };
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);
    unordered_map<int, Node *> cache;
    int max_elements;

    void addnode(Node *ptr)
    {
        ptr->prev = head;
        ptr->next = head->next;
        head->next->prev = ptr;
        head->next = ptr;
    }

    void deletenode(Node *ptr)
    {
        Node *next_to_ptr = ptr->next;
        Node *prev_to_ptr = ptr->prev;

        prev_to_ptr->next = next_to_ptr;
        next_to_ptr->prev = prev_to_ptr;

        delete ptr;
    }

public:
    // Constructor for initializing the cache capacity with the given value
    LRUCache(int cap)
    {
        max_elements = cap;
        head->next = tail;
        tail->prev = head;
    }

    // Function to return value corresponding to the key.
    int GET(int key)
    {
        if (cache.find(key) != cache.end())
        {
            Node *res = cache[key];
            int res_value = res->value;
            deletenode(res);
            Node *newNode = new Node(key, res_value);
            addnode(newNode);
            cache[key] = newNode;
    
            return res_value;
        }
        return -1;
    }

    // Function for storing key-value pair.
    void SET(int key, int value)
    {
        if(cache.find(key) != cache.end()) {
            Node* resnode = cache[key];
            deletenode(resnode);
        }
        else if(cache.size() == max_elements) {
            cache.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        
        Node *newNode = new Node(key, value);
        addnode(newNode);
        cache[key] = newNode;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends