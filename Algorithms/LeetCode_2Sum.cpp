//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//		vector<pair<int, int>> tmp;
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			tmp.push_back({ nums[i], i });
//		}
//
//		sort(tmp.begin(), tmp.end());
//
//		int start = 0;
//		int end = tmp.size() - 1;
//
//		while (start < end)
//		{
//			int sum = tmp[start].first + tmp[end].first;
//
//			if (sum == target)
//			{
//				break;
//			}
//			else if (sum > target)
//			{
//				end--;
//			}
//			else
//			{
//				start++;
//			}
//		}
//
//		return vector<int>{tmp[start].second, tmp[end].second};
//    }
//};
//
//int main()
//{
//	Solution s;
//	auto result = s.twoSum(vector<int>{ 3,3 }, 6);
//	return 0;
//}