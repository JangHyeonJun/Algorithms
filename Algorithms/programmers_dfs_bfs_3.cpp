//#include <string>
//#include <vector>
//
//using namespace std;
//
//int min_count = 2100000000;
//
//bool canChange(const string& a, const string& b)
//{
//	int same_char = 0;
//	for (int i = 0; i < a.length(); i++)
//		if (a[i] == b[i])
//			same_char++;
//
//	return same_char >= a.length()-1;
//}
//
//void dfs(vector<string> words, string target, string s, vector<bool> used, int count = 0)
//{
//	if (s == target || count > words.size())
//	{
//		if (count < min_count)
//			min_count = count;
//		return;
//	}
//	for (int i = 0; i < words.size(); i++)
//	{
//		if (!used[i] && canChange(s, words[i]))
//		{
//			used[i] = true;
//			dfs(words, target, words[i], used, count + 1);
//			used[i] = false;
//		}
//	}
//}
//
//
//int solution(string begin, string target, vector<string> words) {
//
//	bool check = false;
//	for (int i = 0; i < words.size(); i++)
//		if (words[i] == target)
//			check = true;
//	if (!check)
//		return 0;
//
//	vector<bool> used(words.size(), false);
//	dfs(words, target, begin, used);
//
//	if (min_count == 2100000000)
//		min_count = 0;
//
//	return min_count;
//}