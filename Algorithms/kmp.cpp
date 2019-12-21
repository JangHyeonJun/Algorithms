//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<int> getPi(string p)
//{
//	int m = (int)p.size();
//	int j = 0;
//
//	vector<int> pi(m, 0);
//
//	for (int i = 1; i < m; i++) {
//		while (j > 0 && p[i] != p[j])
//			j = pi[j - 1];
//		if (p[i] == p[j])
//			pi[i] = ++j;
//	}
//	return pi;
//}
//
//vector<int> getFail(string s)
//{
//	vector<int> fail(s.length(), 0);
//	int offset = 1, i = 0;
//	while (offset + i < s.length())
//	{
//		if (s[offset + i] == s[i])
//			fail[offset + i] = i++;
//		else
//		{
//			if (i > 0)
//			{
//				offset += i - fail[i - 1];
//				i = fail[i - 1];
//			}
//			else
//				offset++;
//		}
//	}
//
//	return fail;
//}
//
//int kmp(const string& target, const string& pattern)
//{
//	vector<int> fail = getPi(pattern);
//	int offset = 0, i = 0;
//	while (offset < target.length())
//	{
//		if (i < pattern.length() && target[offset + i] == pattern[i])
//		{
//			i++;
//			if (i == pattern.length())
//				return offset;
//		}
//		else
//		{
//			if (i > 0)
//			{
//				offset += i - fail[i - 1];
//				i = fail[i - 1];
//			}
//			else
//				offset++;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	kmp("aabaabaac", "aabaac");
//	return 0;
//}