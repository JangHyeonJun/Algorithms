#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int sum, maxSum;
    maxSum = INT_MIN;

    vector<int> v(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
      sum = 0;
      v.clear();
      for (int j = i; j < nums.size(); j++)
      {
        sum += nums[j];
        if (sum > maxSum)
          maxSum = sum;
      }

    }

    return maxSum;
  }
};

int main()
{
  Solution s;
  vector<int> v{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
  vector<int> v2{ -2,1,-3,4,-1,2,1,-5, 4 };
  vector<int> v3{ 1,2,-1,-2,2,1,-2,1 };
  vector<int> v4{ 8, -19, 5, -4, 20 };
  auto result = s.maxSubArray(v4);

  return 0;
}