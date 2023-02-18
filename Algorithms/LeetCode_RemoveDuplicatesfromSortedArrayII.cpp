//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//  int removeDuplicates(vector<int>& nums) {
//    const int EMPTY = 123456789;
//    int size = nums.size();
//    int result = size;
//
//    if (size <= 2)
//      return result;
//
//    for (int i = 0; i < size - 2; i++)
//      if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2])
//      {
//        nums[i] = EMPTY;
//        result--;
//      }
//
//    int a, b;
//    a = 0;
//    while (true)
//    {
//      while (a < size && nums[a] != EMPTY)
//        a++;
//
//      b = a + 1;
//      while (b < size && nums[b] == EMPTY)
//        b++;
//
//      if (a >= b || b >= size)
//        break;
//
//      swap(nums[a++], nums[b++]);
//    }
//
//    return result;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<int> v{ 0,0,1,1,1,1,2,3,3 };
//  s.removeDuplicates(v);
//}