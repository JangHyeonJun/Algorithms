//#include <string>
//#include <map>
//using namespace std;
//
//class Solution {
//	map<int, string, greater<int>> m =
//	{
//		{1,    "I"},
//		{4,	   "IV"},
//		{5,    "V"},
//		{10,   "X"},
//		{50,   "L"},
//		{100,  "C"},
//		{500,  "D"},
//		{1000, "M"},
//		{9,    "IX"},
//		{40,   "XL"},
//		{90,   "XC"},
//		{400,  "CD"},
//		{900,  "CM"},
//	};
//public:
//	string intToRoman(int num) {
//		string result = "";
//		while (num > 0)
//		{
//			for (const auto& [k, v] : m)
//				if (num >= k)
//				{
//					num -= k;
//					result += v;
//					break;
//				}
//		}
//
//		return result;
//	}
//};