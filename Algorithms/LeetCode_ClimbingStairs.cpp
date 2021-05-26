//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	int climbStairs(int n) {
//		vector<int> v(n);
//		for (int i = 0; i < n; i++)
//			if (i < 2)
//				v[i] = i + 1;
//			else
//				v[i] = v[i - 1] + v[i - 2];
//
//		return v[n - 1];
//	}
//};
//
//int main()
//{
//	Solution s;
//	auto a = s.climbStairs(1);
//}