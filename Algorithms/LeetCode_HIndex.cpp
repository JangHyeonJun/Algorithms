//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int hIndex(vector<int>& citations) {
//		sort(citations.begin(), citations.end(), greater<>());
//
//		auto next = citations[0];
//		auto count = 0;
//		for (auto n : citations)
//		{
//			if (n <= count)
//				return count;
//			else if (n < next)
//				next = n;
//
//			count++;
//			if (next <= count)
//				return next;
//		}
//
//		return min(count, next);
//	}
//};
//
//int main()
//{
//	vector<int> v{ 3,0,6,1,5 };
//	Solution s;
//	s.hIndex(v);
//}