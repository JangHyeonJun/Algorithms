//#include <vector>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//
//public:
//	vector<vector<string>> groupAnagrams(vector<string>& strs) {
//		vector<vector<string>> result;
//
//		unordered_map<string, vector<string>> um;
//
//		for (int i = 0; i < strs.size(); i++)
//		{
//			auto str = strs[i];
//			sort(str.begin(), str.end());
//
//			if (um.find(str) == um.end())
//				um[str] = vector<string>{ strs[i] };
//			else
//				um[str].push_back(strs[i]);
//		}
//
//		for (auto v : um)
//			result.push_back(v.second);
//
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<string> v{ "aaab", "baaa" };
//	vector<string> v2{ "", "a", "" };
//
//	s.groupAnagrams(v2);
//
//	return 0;
//}