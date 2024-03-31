//#include <vector>
//#include <math.h>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//  int maxSubArray(vector<int>& nums) {
//    vector<int> v(nums.size());
//    v[0] = nums[0];
//    for (int i = 1; i < nums.size(); i++)
//      v[i] = max(nums[i], nums[i] + v[i - 1]);
//
//    int maxNum = *max_element(v.begin(), v.end());
//    return maxNum;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<int> v{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
//  vector<int> v2{ -2,1,-3,4,-1,2,1,-5, 4 };
//  vector<int> v3{ 1,2,-1,-2,2,1,-2,1 };
//  vector<int> v4{ 8, -19, 5, -4, 20 };
//  auto result = s.maxSubArray(v2);
//
//  return 0;
//}