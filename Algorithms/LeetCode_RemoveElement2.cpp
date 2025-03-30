//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        int result = 0;
//        for (int i = 0; i < nums.size(); i++)
//            if (nums[i] == val)
//                result++;
//            else
//                nums[i - result] = nums[i];
//        return nums.size() - result;
//    }
//};
////
////int main()
////{
////    Solution s;
////    vector<int> v{ 0,1,2,2,3,0,4,2 };
////    auto result = s.removeElement(v, 2);
////
////    return 0;
////}