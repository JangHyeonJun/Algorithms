// 이진탐색을 여러번하는게 아니라
// lower, upper bound를 찾는 이진탐색을 해야함
// 
//#include <vector>
//
//using namespace std;
//
//class Solution {
//
//    int findLower(vector<int>& nums, int target)
//    {
//        if (nums.empty())
//            return -1;
//
//        int begin = 0;
//        int end = nums.size() - 1;
//
//        while (begin < end) {
//            int i = (begin + end) / 2;
//
//            if (nums[i] >= target)
//                end = i;
//            else
//                begin = i + 1;
//        }
//
//        return nums[begin] == target ? begin : -1;
//    }
//
//    int findUpper(vector<int>& nums, int target)
//    {
//        if (nums.empty())
//            return -1;
//
//        int begin = 0;
//        int end = nums.size();
//
//        while (begin < end) {
//            int i = (begin + end) / 2;
//
//            if (nums[i] <= target)
//                begin = i + 1;
//            else
//                end = i;
//        }
//
//        return (begin >= 0 && nums[begin - 1] == target) ? begin - 1 : -1; 
//    }
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        auto lower = findLower(nums, target);
//        auto upper = findUpper(nums, target);
//
//        return { lower, upper };
//    }
//};
