//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool can_solve[41];
//
//bool canRemove(const string& s1, const string& s2)
//{
//	string s = s1 + s2;
//	for (int i = 0; i < s.length() / 2; i++)
//	{
//		if (s[i] != s[s.length() - 1 - i])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void dfs(vector<string> P, vector<bool> used, int start)
//{
//	bool solved = true;
//	for (int i = 0; i < used.size(); i++)
//		if (!used[i])
//			solved = false;
//	if (solved)
//	{
//		can_solve[start] = true;
//		return;
//	}
//
//	if (!used[start])
//	{
//		if (canRemove(P[0], P[start]))
//		{
//			used[0] = true;
//			used[start] = true;
//		}
//		else
//			return;
//	}
//
//
//	for (int i = 1; i < P.size(); i++)
//	{
//		int index1 = -1, index2 = -1;
//		if (!used[i] && index1 == -1)
//		{
//			index1 = i;
//			continue;
//		}
//		if (!used[i] && index1 != -1 && index2 == -1)
//		{
//			index2 = i;
//			
//			if (canRemove(P[index1], P[index2]))
//			{
//				used[index1] = true;
//				used[index2] = true;
//				dfs(P, used, start);
//			}
//		}
//	}
//}
//
//int main()
//{
//	vector<string> P;
//	vector<bool> used(P.size(), false);
//	for (int i = 1; i < P.size(); i++)
//		dfs(P, used, i);
//
//	
//
//	return 0;
//}