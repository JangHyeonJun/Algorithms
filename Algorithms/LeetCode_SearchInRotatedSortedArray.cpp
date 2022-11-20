//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//private:
//    int pivot = -1;
//    vector<int> nums = {};
//    int FindPivot()
//    {
//        int l = 0;
//        int r = nums.size() - 1;
//        int c = (l + r) / 2;
//
//        while (l <= r)
//        {
//            if (c > 0 && nums[c - 1] > nums[c])
//                return c;
//
//            if (nums[r] < nums[c])
//                l = c + 1;
//            else
//                r = c - 1;
//
//            c = (l + r) / 2;
//        }
//
//        return 0;
//    }
//
//    int GetRotatedIndex(int index)
//    {
//        int rotated = pivot + index;
//
//        if (rotated >= nums.size())
//            rotated -= nums.size();
//
//        return rotated;
//    }
//
//public:
//    int search(vector<int>& _nums, int _target) {
//        this->nums = _nums;
//        this->pivot = FindPivot();
//
//        int l = 0;
//        int r = nums.size() - 1;
//        int c = (l + r) / 2;
//
//        while (l <= r)
//        {
//            if (nums[GetRotatedIndex(c)] == _target)
//                return GetRotatedIndex(c);
//
//            if (nums[GetRotatedIndex(c)] < _target)
//                l = c + 1;
//            else
//                r = c - 1;
//
//            c = (l + r) / 2;
//        }
//
//        return -1;
//    }
//};
////
////int main()
////{
////    Solution s;
////    vector<int> v = { 3, 4, 5, 6, 1, 2 };
////    vector<int> v2 = { 4,5,6,7,0, 1, 2 };
////    vector<int> v3 = { 1 };
////
////    auto result = s.search(v3, 0);
////
////    return 0;
////}