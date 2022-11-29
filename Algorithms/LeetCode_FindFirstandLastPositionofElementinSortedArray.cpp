//#include <vector>
//
//using namespace std;
//
//class Solution {
//private:
//    int FindMinTarget(const vector<int>& nums, int target)
//    {
//        int l = 0;
//        int r = nums.size() - 1;
//        while (l <= r)
//        {
//            int c = (l + r) / 2;
//
//            if (nums[c] == target)
//            {
//                l = 0;
//                r = c;
//
//                while (l <= r)
//                {
//                    c = (l + r) / 2;
//
//                    if (nums[c] == target)
//                        r = c - 1;
//                    else
//                        l = c + 1;
//                }
//
//                return l;
//            }
//            else if (nums[c] > target)
//                r = c - 1;
//            else
//                l = c + 1;
//        }
//
//        return -1;
//    }
//
//    int FindMaxTarget(const vector<int>& nums, int target)
//    {
//        int l = 0;
//        int r = nums.size() - 1;
//        while (l <= r)
//        {
//            int c = (l + r) / 2;
//
//            if (nums[c] == target)
//            {
//                r = nums.size() - 1;
//                l = c;
//
//                while (l <= r)
//                {
//                    c = (l + r) / 2;
//
//                    if (nums[c] == target)
//                        l = c + 1;
//                    else
//                        r = c - 1;
//                }
//
//                return r;
//            }
//            else if (nums[c] > target)
//                r = c - 1;
//            else
//                l = c + 1;
//        }
//
//        return -1;
//    }
//
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        if (nums.size() <= 0)
//            return { -1, -1 };
//
//        auto min = FindMinTarget(nums, target);
//        auto max = FindMaxTarget(nums, target);
//
//        return {min, max};
//    }
//};
//
//int main()
//{
//    Solution s;
//
//    vector<int> v{ 4, 5, 5, 5, 8, 8, 10 };
//    vector<int> v2{ 1, 2, 2, 2, 2, 2, 2 };
//    s.searchRange(v2, 2);
//
//    return 0;
//}