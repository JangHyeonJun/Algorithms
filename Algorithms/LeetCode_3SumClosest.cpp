//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int threeSumClosest(vector<int>& nums, int target) {
//        int result = 987654321;
//        sort(nums.begin(), nums.end());
//
//        for (int offset = 0; offset < nums.size() - 2; offset++)
//        {
//            int l = offset + 1;
//            int r = nums.size() - 1;
//
//            while (l < r)
//            {
//                int sum = nums[offset] + nums[l] + nums[r];
//
//                if (sum == target)
//                    return sum;
//                else if (sum < target)
//                    l++;
//                else
//                    r--;
//
//                if (abs(target - sum) < abs(target - result))
//                    result = sum;
//            }
//
//        }
//
//        return result;
//    }
//};
//
//int main()
//{
//    vector<int> v = { -1, 2, 1, -4 };
//    Solution s;
//    s.threeSumClosest(v, 1);
//	return 0;
//}