//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	bool canJump(vector<int>& nums) {
//		int maxIndex = nums[0];
//		for (int i = 0; i <= maxIndex && i < nums.size(); i++)
//			maxIndex = max(maxIndex, i + nums[i]);
//
//		return maxIndex >= nums.size() - 1;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 1,2,3 };
//	auto result = s.canJump(v);
//	return 0;
//}