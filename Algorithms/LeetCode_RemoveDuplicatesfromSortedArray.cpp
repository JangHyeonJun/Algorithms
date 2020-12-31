//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//		if (nums.size() < 1)
//			return 0;
//
//		int i = 0;
//        int j = i + 1;
//        while (j < nums.size())
//        {
//			if (nums[i] != nums[j])
//			{
//				i++;
//				swap(nums[i], nums[j]);
//			}
//
//			j++;
//        }
//
//		return i + 1;
//	}
//	void swap(int& num1, int& num2)
//	{
//		int tmp = num1;
//		num1 = num2;
//		num2 = tmp;
//	}
//};
//
//int main()
//{
//	Solution s;
//	s.removeDuplicates(vector<int> {0, 0, 1, 1, 1, 2, 2, 3, 3, 4});
//}