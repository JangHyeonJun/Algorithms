//#include <vector>
//#include <stack>
//using namespace std;
//
//class Solution {
//public:
//	bool canJump(vector<int>& nums) {
//		stack<int> s;
//		vector<bool> flags(nums.size(), false);
//		s.push(0);
//
//		do
//		{
//			int index = s.top();
//			s.pop();
//
//
//			if (index >= nums.size() - 1)
//				return true;
//
//			if (flags[index])
//				continue;
//
//			flags[index] = true;
//
//			for (int i = 1; i <= nums[index]; i++)
//				s.push(index + i);
//
//		} while (s.empty() == false);
//
//		return false;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 2,3,1,1,4 };
//	s.canJump(v);
//}