// 이진탐색을 여러번하는게 아니라
// lower, upper bound를 찾는 이진탐색을 해야함
// 
//#include <vector>
//
//using namespace std;
//
//class Solution {
//private:
//    pair<int, int> find(vector<int>& nums, int begin, int end, int target)
//    {
//        if (nums.size() == 0)
//            return { -1, -1 };
//
//        while (begin <= end)
//        {
//            int i = (begin + end) / 2;
//            if (nums[i] == target)
//            {
//                if (begin == end)
//                    return { i, i };
//
//                auto lower = find(nums, begin, i - 1, target);
//                auto upper = find(nums, i + 1, end, target);
//
//                int low = lower.first == -1 ? i : 
//                    i < lower.first ? i : lower.first;
//                int high = upper.second == -1 ? i : 
//                    i > upper.second ? i : upper.second;
//
//                return { low, high };
//            }
//            else if (nums[i] > target)
//                end = i - 1;
//            else
//                begin = i + 1;
//        }
//
//        return { -1, -1 };
//    }
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        auto result = find(nums, 0, nums.size() - 1, target);
//
//        return vector<int> {result.first, result.second};
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 5,7,7,8,8,8,10 };
//    auto result = s.searchRange(v, 8);
//    return 0;
//}