//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		k = k % nums.size();
//		rotateNTimeComplexity(nums, k);
//	}
//
//private:
//	void rotateWithOnlyOneSpace(vector<int>& nums, int k)
//	{
//		for (int i = 0; i < k; i++)
//			for (int j = nums.size() - 1; j > 0; j--)
//				swap(nums[j], nums[j - 1]);
//	}
//
//	void rotateNTimeComplexity(vector<int>& nums, int k)
//	{
//		vector<int> temp(nums.size());
//		for (int i = 0; i < nums.size(); i++)
//			temp[i] = nums[(nums.size() - k + i) % nums.size()];
//
//		nums.assign(temp.begin(), temp.end());
//	}
//};
//
//int main()
//{
//	vector<int> v{ 1,2,3,4,5,6,7 };
//	Solution s;
//
//	s.rotate(v, 3);
//}