//#include <string>
//#include <map>
//using namespace std;
//
//class Solution {
//	map<char, int> m =
//	{
//		{'I', 1},
//		{'V', 5},
//		{'X', 10},
//		{'L', 50},
//		{'C', 100},
//		{'D', 500},
//		{'M', 1000},
//	};
//	map<string, int> fusion =
//	{
//		{"IV", 4},
//		{"IX", 9},
//		{"XL", 40},
//		{"XC", 90},
//		{"CD", 400},
//		{"CM", 900},
//	};
//public:
//	int romanToInt(string s) {
//		int result = 0;
//		for (int i = 0; i < s.length(); i++)
//			if (i != s.length() - 1 && fusion.contains(s.substr(i, 2)))
//				result += fusion[s.substr(i++, 2)];
//			else
//				result += m[s[i]];
//		return result;
//	}
//};
//
//int main()
//{
//	string str = "MCMXCIV";
//	Solution s;
//	s.romanToInt(str);
//	return 0;
//}