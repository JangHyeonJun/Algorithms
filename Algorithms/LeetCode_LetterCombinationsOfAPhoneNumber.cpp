//#include <vector>
//#include <string>
//#include <iostream>
//using namespace std;
//
//class Solution {
//private:
//	vector<vector<string>> letterMap = {
//		{},
//		{},
//		{"a", "b", "c"},
//		{"d", "e", "f"},
//		{"g", "h", "i"},
//		{"j", "k", "l"},
//		{"m", "n", "o"},
//		{"p", "q", "r", "s"},
//		{"t", "u", "v"},
//		{"w", "x", "y", "z"} };
//
//	vector<string> GetCombination(string letters, string digits)
//	{
//		if (digits.empty())
//			return { letters };
//
//		vector<string> result;
//
//		int digit = digits.front() - 48;
//		digits.erase(0, 1);
//
//		for (const auto& c : letterMap[digit])
//		{
//			auto comb = GetCombination(letters + c, digits);
//			result.insert(result.end(), comb.begin(), comb.end());
//		}
//
//		return result;
//	}
//public:
//
//    vector<string> letterCombinations(string digits) {
//		
//		return digits.empty() ? vector<string>() : GetCombination("", digits);
//    }
//};
//
//int main()
//{
//	Solution s;
//	auto result = s.letterCombinations("");
//	return 0;
//}