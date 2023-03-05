//#include <vector>
//
//using namespace std;
//
//class Solution {
//  int findPivot(vector<int>& nums)
//  {
//    auto size = nums.size();
//    int l = 0;
//    int r = size - 1;
//
//    while (l < r)
//    {
//      int c = (l + r) / 2;
//
//      if (c == r && nums[l] < nums[r])
//        return l;
//      else if (nums[r] < nums[c])
//        l = c + 1;
//      else
//        r = c - 1;
//    }
//    
//    return r;
//  }
//  int convertIndex(int pivot, int size, int i)
//  {
//    return (i + pivot) % size;
//  }
//public:
//  bool search(vector<int>& nums, int target) {
//    auto pivot = findPivot(nums);
//    auto size = nums.size();
//
//    int l = 0;
//    int r = size - 1;
//
//    while (l <= r)
//    {
//      int c = (l + r) / 2;
//      int num = nums[convertIndex(pivot, size, c)];
//
//      if (num == target)
//        return true;
//      else if (num < target)
//        l = c + 1;
//      else
//        r = c - 1;
//    }
//
//    return false;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<int> v{ 1,0,1,1,1 };
//  s.search(v, 0);
//
//  return 0;
//}