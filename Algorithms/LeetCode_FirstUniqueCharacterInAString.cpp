//#include <string>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		map<char, int> um;
//
//		for (auto c : s)
//		{
//			if (um.contains(c))
//				um[c]++;
//			else
//				um[c] = 1;
//		}
//
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (um[s[i]] == 1)
//				return i;
//		}
//
//		return -1;
//	}
//};