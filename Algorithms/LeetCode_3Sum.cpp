//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//		vector<vector<int>> result;
//		sort(nums.begin(), nums.end());
//
//		for (int left = 0; left < (int)nums.size() - 2; left++)
//		{
//			int center = left + 1;
//			int right = nums.size() - 1;
//
//			if (left > 0 && nums[left] == nums[left - 1])
//				continue;
//
//			while (center < right)
//			{
//				int sum = nums[left] + nums[center] + nums[right];
//
//				if (sum < 0)
//					center++;
//				else if (sum > 0)
//					right--;
//				else
//				{
//					result.push_back({ nums[left], nums[center], nums[right] });
//					while (nums.size() > center + 1 && nums[center] == nums[center + 1])
//						center++;
//					while (0 <= right - 1 && nums[right] == nums[right - 1])
//						right--;
//
//					center++;
//					right--;
//				}
//			}
//		}
//
//		return result;
//    }
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v = { -1, 0, 1, 2, -1, -4 };
//	vector<int> v2 = { -1, -1, -1, 0, 1, 1, 1 };
//	vector<int> v3 = { -1, 0, 1, 2, -1, -4, -2, -3, 3, 0, 4 };
//	vector<int> v4 = { -4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6 };
//	s.threeSum(v);
//
//	return 0;
//}