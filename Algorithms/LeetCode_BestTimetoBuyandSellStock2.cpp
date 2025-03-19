//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int min = 2147483647, result = 0;
//		for (int i = 0; i < prices.size(); i++)
//		{
//			if (prices[i] < min)
//				min = prices[i];
//			if (prices[i] - min > result)
//				result = prices[i] - min;
//		}
//
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 7, 4, 6, 3, 1 };
//	s.maxProfit(v);
//}