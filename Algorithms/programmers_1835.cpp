//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int case_num = 0;
//
//vector<char> name({ 'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T' });
//
//int getDist(char a, char b, string s)
//{
//	size_t iter_a = s.find(a);
//	size_t iter_b = s.find(b);
//	if (iter_a == string::npos || iter_b == string::npos)
//		return -1;
//	else
//		return iter_b > iter_a ? iter_b - iter_a : iter_a - iter_b;
//}
//
//bool checkCondition(vector<string> data, string s)
//{
//	for (int i = 0; i < data.size(); i++)
//	{
//		char a = data[i][0];
//		char b = data[i][2];
//		char oper = data[i][3];
//		int dist_condition = data[i][4] - 47;
//		int dist = getDist(a, b, s);
//		if (dist == -1)
//			continue;
//		switch (oper)
//		{
//		case '=':
//			if (dist != dist_condition)
//				return false;
//			break;
//		case '<':
//			if (dist >= dist_condition)
//				return false;
//			break;
//		case '>':
//			if (dist <= dist_condition)
//				return false;
//			break;
//		default:
//			break;
//		}
//	}
//	return true;
//}
//
//void find(int n, vector<string>& data, string& s, vector<bool>& used)
//{
//	if (s.length() == 8)
//		case_num++;
//	else
//		for (int i = 0; i < 8; i++)
//		{
//			if (!used[i])
//			{
//				s.push_back(name[i]);
//				used[i] = true;
//				if (checkCondition(data, s))
//					find(n, data, s, used);
//				used[i] = false;
//				s.pop_back();
//			}
//		}
//}
//
//int find_permu(int n, vector<string>& data)
//{
//	int cnt = 0;
//	do {
//		string s = "";
//		for (int i = 0; i < name.size(); i++)
//			s.push_back(name[i]);
//		if (checkCondition(data, s))
//			cnt++;
//	} while (next_permutation(name.begin(), name.end()));
//
//	return cnt;
//}
//
//int solution(int n, vector<string> data) {
//	return find_permu(n, data);
//}
//
//int main()
//{
//	vector<string> data = { "N~F=0", "R~T>2" };
//	solution(2, data);
//}