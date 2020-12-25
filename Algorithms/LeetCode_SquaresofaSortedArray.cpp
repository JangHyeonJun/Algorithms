//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	int comp(int a, int b)
//	{
//		if (a < b)
//			return 1;
//		else if (a == b)
//			return 0;
//		else
//			return -1;
//	}
//
//	void quick_sort(vector<int>& data, int start, int end)
//	{
//		// only 1 element
//		if (start >= end)
//			return;
//
//		int pivot = start;
//		int i = pivot + 1;
//		int j = end;
//		int temp;
//
//
//		while (i <= j)
//		{
//			// until the pivots intersect
//			while (i <= end && comp(data[i], data[pivot]) >= 0)
//				i++;
//			while (j > start && comp(data[j], data[pivot]) <= 0)
//				j--;
//
//			if (i > j)
//			{
//				temp = data[j];
//				data[j] = data[pivot];
//				data[pivot] = temp;
//			}
//			else
//			{
//				temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//		}
//
//		quick_sort(data, start, j - 1);
//		quick_sort(data, j + 1, end);
//	}
//    vector<int> sortedSquares(vector<int>& nums) {
//		for (auto& num : nums)
//			num *= num;
//		quick_sort(nums, 0, nums.size() - 1);
//		return nums;
//    }
//};
//
//
//int main()
//{
//	vector<int> a = { -6,4,3,2,5,1,9,8 };
//    Solution s;
//
//}