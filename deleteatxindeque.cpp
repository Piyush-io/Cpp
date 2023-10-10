//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <deque>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Function to erase the element from specified position X in deque.
void eraseAt(deque<int> &deq, int X)
{
    if (X >= 0 && X < deq.size())
    {
        deque<int>::iterator it = deq.begin() + X;
        deq.erase(it);
    }
}

// Function to erase the elements in range start (inclusive), end (exclusive).
void eraseInRange(deque<int> &deq, int start, int end)
{
    if (start >= 0 && start < deq.size() && end >= start && end <= deq.size())
    {
        deque<int>::iterator it1 = deq.begin() + start;
        deque<int>::iterator it2 = deq.begin() + end;
        deq.erase(it1, it2);
    }
}

// Function to erase all the elements in the deque.
void eraseAll(deque<int> &deq)
{
    deq.clear();
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        deque<int> deq;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            deq.push_back(val);
        }

        int eraseQuery;
        cin >> eraseQuery;

        if (eraseQuery == 1)
        {
            int pos;
            cin >> pos;
            eraseAt(deq, pos);
        }
        else if (eraseQuery == 2)
        {
            int start, end;
            cin >> start >> end;
            eraseInRange(deq, start, end);
        }
        else
        {
            eraseAll(deq);
        }

        if (deq.empty())
            cout << "Empty";
        else
        {
            for (auto itr = deq.begin(); itr != deq.end(); itr++)
                cout << *itr << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends