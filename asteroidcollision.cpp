#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> asteroidCollision(vector<int> &a) {
    stack<int> s;
    for (int i = a.size() - 1; i >= 0; i--) {
      if (s.empty()) {
        s.push(a[i]);
      } else {
        int temp = s.top();
        if ((temp > 0 && a[i] > 0) || (temp < 0 && a[i] < 0)) {
          s.push(a[i]);
        } else {
          if (abs(a[i]) > abs(s.top())) {
            while (abs(a[i]) > abs(s.top()) && !s.empty()) {
              s.pop();
            }
            s.push(a[i]);
          } else if (abs(a[i]) == abs(s.top())) {
            s.pop();
          }
        }
      }
    }

    vector<int> ans;
    while (!s.empty()) {
      ans.push_back(s.top());
      s.pop();
    }
    return ans;
  }
};

int main() {
  Solution ob;
  vector<int> a;
  a.push_back(5);
  a.push_back(10);
  a.push_back(-5);
  vector<int> res = ob.asteroidCollision(a);
  int n = res.size();
  for (int i = 0; i < n; i++) {
    cout << res[i] << endl;
  }
}
