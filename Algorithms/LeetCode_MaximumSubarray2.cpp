//#include <vector>
//#include <math.h>
//using namespace std;
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int max_sum = -12345678, current_sum = 0;
//		for (auto n : nums)
//		{
//			current_sum = max(n, current_sum + n);
//			max_sum = max(max_sum, current_sum);
//		}
//		return max_sum;
//	}
//};