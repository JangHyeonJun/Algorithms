//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//private:
//
//	void dfs(vector<string>& result, int n, pair<int, int> count = make_pair(0, 0), string s = "")
//	{
//		if (count.second == n)
//		{
//			result.push_back(s);
//			return;
//		}
//
//		if (count.first < n)
//			dfs(result, n, make_pair(count.first + 1, count.second), s + '(');
//
//		if (count.second < count.first)
//			dfs(result, n, make_pair(count.first, count.second + 1), s + ')');
//	}
//
//public:
//	vector<string> generateParenthesis(int n) {
//		vector<string> result;
//		this->dfs(result, n);
//
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	auto result = s.generateParenthesis(1);
//
//	for (const auto& s : result)
//		cout << s << endl;
//	return 0;
//}