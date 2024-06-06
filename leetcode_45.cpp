#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int jump(vector<int> &nums) {
    int n = nums.size();
    if (n < 2)
      return 0;
    int maxPos = 0;
    int jumps = 0;
    int currentend = 0;
    for (int i = 0; i < n; i++) {
      maxPos = max(maxPos, i + nums[i]);
      if (i == currentend) {
        jumps++;
        currentend = maxPos;
        if (currentend >= n - 1)
          break;
      }
    }
    return jumps;
  }
};
