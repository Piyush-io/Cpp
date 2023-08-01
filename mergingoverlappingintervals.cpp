#include <iostream>
using namespace std;

struct interval
{
    int st;
    int end;
};

bool mycomp(interval a, interval b) { return a.st < b.st; }

void merging(interval arr[], int n)
{
    sort(arr, arr + n, mycomp);

    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res].end >= arr[i].st)
        {
            arr[res].end = max(arr[res].end, arr[i].end);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }

    cout << "\n The Merged Intervals are: ";
    for (int i = 0; i <= res; i++)
        cout << "[" << arr[i].st << ", " << arr[i].end << "] ";
}

int main()
{
    struct interval arr[] = {{7,9}, {6,10}, {4,5}, {1,3} ,{2,4}};
    merging(arr, 4);
}