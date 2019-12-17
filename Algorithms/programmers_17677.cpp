//#include <string>
//#include <unordered_set>
//#include <algorithm>
//using namespace std;
//
//unordered_multiset<string> make_multiset(const string& s)
//{
//	unordered_multiset<string> um;
//	for (int i = 1; i < s.length(); i++)
//	{
//		string sub = "";
//		if (s[i - 1] >= 65 && s[i - 1] <= 90)
//			sub += s[i - 1] + 32;
//		else if (s[i - 1] >= 97 && s[i - 1] <= 122)\
//			sub += s[i - 1];
//		else
//			continue;
//
//		if (s[i] >= 65 && s[i] <= 90)
//			sub += s[i] + 32;
//		else if (s[i] >= 97 && s[i] <= 122)\
//			sub += s[i];
//		else
//			continue;
//
//		um.insert(sub);
//	}
//
//	return um;
//}
//
//int getJacquard(const string& s1, const string& s2)
//{
//	unordered_multiset<string> um1 = make_multiset(s1);
//	unordered_multiset<string> um2 = make_multiset(s2);
//
//	int union_num = um1.size() + um2.size();
//	int inter_num = 0;
//
//	auto iter = um1.begin();
//	while (!um1.empty())
//	{
//		if (um2.find(*iter) != um2.end())
//		{
//			inter_num += min(um1.count(*iter), um2.count(*iter));
//			um2.erase(*iter);
//		}
//		um1.erase(*iter);
//		iter = um1.begin();
//	}
//
//	union_num -= inter_num;
//
//	if (union_num == 0)
//		return 65536;
//
//	return 65536 * inter_num / union_num;
//}
//
//int solution(string str1, string str2) {
//	return getJacquard(str1, str2);
//}