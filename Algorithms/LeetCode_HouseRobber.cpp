//#include <vector>
//#include <math.h>
//using namespace std;
//
//class Solution {
//public:
//	int rob(vector<int>& nums) {
//		int maxValue = 0;
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (i == 2)
//				nums[i] += nums[i - 2];
//			else if (i > 2)
//				nums[i] = max(nums[i] + nums[i - 2], nums[i] + nums[i - 3]);
//
//			maxValue = max(maxValue, nums[i]);
//		}
//
//		return maxValue;
//	}
//};