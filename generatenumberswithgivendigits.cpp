#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> reqnumbers;
    int n;
    cout << "How many numbers do you want with only thses digits:" << endl;
    cin >> n;
    reqnumbers.push("1");
    for (int i = 0; i < n; i++)
    {
        string curr = reqnumbers.front();
        cout << curr << " " << endl;
        reqnumbers.pop();
        reqnumbers.push(curr + "0");
        reqnumbers.push(curr + "1");
    }
}