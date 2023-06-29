#include <iostream>
#include <vector>
using namespace std;

double Median(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();

    if (n1 > n2)
    {
        return Median(v2, v1);
    }

    int si = 0;
    int ei = n1;
    int mid_in_merged_array = (n1 + n2 + 1) / 2;
    while (si < ei)
    {
        int mid = si + ei / 2;
        int sizeofleftpartofA = mid;
        int sizeofleftpartofB = mid_in_merged_array - mid;
        int leftA = (sizeofleftpartofA > 0) ? v1[sizeofleftpartofA - 1] : INT_MIN;
        int leftB = (sizeofleftpartofB > 0) ? v2[sizeofleftpartofB - 1] : INT_MIN;
        int rightA = sizeofleftpartofA < n1 ? v1[sizeofleftpartofA] : INT_MAX;
        int rightB = sizeofleftpartofB < n2 ? v2[sizeofleftpartofB] : INT_MAX;
        if (leftA <= rightB && leftB <= rightA)
        {
            if (n1 + n2 % 2 == 0)
            {
                return (max(leftA, leftB) + min(rightA, rightB)) / 2.0;
            }
            return max(leftA, leftB);
        }
        else if (leftA > rightB)
            ei = mid - 1;
        else
            si = mid + 1;
    }
    return 0.0;
}

int main()
{
    vector<int> arr1 = {-5, 3, 6, 12, 15};
    vector<int> arr2 = {-12, -10, -6, -3, 4, 10};
    cout << "Median of the two arrays is" << endl;
    cout << Median(arr1, arr2);
    return 0;
}