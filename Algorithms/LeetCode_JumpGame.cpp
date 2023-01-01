//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//  bool canJump(vector<int>& nums) {
//
//    int min = 0;
//    for (int i = nums.size() - 1; i >= 0; i--)
//    {
//      if (nums[i] >= min)
//        min = 1;
//      else
//        min++;
//    }
//
//    return min == 1;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<int> v{ 2, 3, 1, 1, 4 };
//  s.canJump(v);
//}