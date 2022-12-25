//#include <vector>
//#include <math.h>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//  int maxSubArray(vector<int>& nums) {
//    int allMax = nums[0], sum = 0;
//
//    for (int i = 0; i < nums.size(); i++)
//    {
//      sum += nums[i];
//      sum = max(sum, nums[i]);
//      allMax = max(allMax, sum);
//    }
//
//    return allMax;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<int> v{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
//  vector<int> v2{ 0, -1, -2, -3 };
//  auto result = s.maxSubArray(v);
//
//  return 0;
//}