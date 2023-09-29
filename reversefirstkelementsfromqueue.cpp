#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int k;
    cout << "How many elements you want to be reversed: ";
    cin >> k;
    stack<int> temp;
    for (int i = 0; i < k; i++)
    {
        int x;
        x = q.front();
        q.pop();
        temp.push(x);
    }

    for (int i = 0; i < k; i++)
    {
        q.push(temp.top());
        temp.pop();
    }
    for (int i = 0; i < n - k; i++)
    {
        q.push(q.front());
        q.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}