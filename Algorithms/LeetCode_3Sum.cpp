//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//#include <string>
//
//using namespace std;
//
//class Solution {
//private:
//	void SetResult(const vector<int>& nums, unordered_set<string>& us, vector<vector<int>>& result, int left, int center, int right)
//	{
//		string s = to_string(nums[left]) + to_string(nums[center]) + to_string(nums[right]);
//
//		if (us.find(s) == us.end())
//		{
//			us.insert(s);
//			result.push_back({ nums[left], nums[center], nums[right] });
//		}
//	}
//
//	int GetThreeSumCenter(vector<int>& nums, int left, int right)
//	{
//		int sum = nums[left] + nums[right];
//
//		for (int i = left + 1; i < right; i++)
//			if (sum + nums[i] == 0)
//				return i;
//		return -1;
//	}
//
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//		unordered_set<string> us;
//		vector<vector<int>> result;
//		
//		sort(nums.begin(), nums.end());
//
//		int leftOffSet = 0;
//		int rightOffSet = nums.size() - 1;
//
//		while (leftOffSet < rightOffSet - 1)
//		{
//			for (int right = rightOffSet; right > leftOffSet + 1; right--)
//			{
//				auto center = GetThreeSumCenter(nums, leftOffSet, right);
//				if (center != -1)
//					SetResult(nums, us, result, leftOffSet, center, right);
//			}
//
//			for (int left = leftOffSet + 1; left < rightOffSet - 1; left++)
//			{
//				auto center = GetThreeSumCenter(nums, left, rightOffSet);
//				if (center != -1)
//					SetResult(nums, us, result, left, center, rightOffSet);
//			}
//
//			leftOffSet++;
//			rightOffSet--;
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
//	s.threeSum(v4);
//
//	return 0;
//}