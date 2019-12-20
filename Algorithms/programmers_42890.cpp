//#include <string>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//int solution(vector<vector<string>> relation) {
//	vector<int> answers;
//	int row = relation.size();
//	int col = relation[0].size();
//
//	for (int i = 1; i < (1 << col); i++)
//	{
//		unordered_set<string> us;
//		for (int j = 0; j < row; j++)
//		{
//			string s("");
//			for (int k = 0; k < col; k++)
//				if (i&(1<<k))
//					s += relation[j][k];
//			us.insert(s);
//		}
//		if (us.size() == row)
//		{
//			bool is_included = false;
//			for (int j = 0; j < answers.size(); j++)
//				if ((i&answers[j]) == answers[j])
//				{
//					is_included = true;
//					break;
//				}
//			if (!is_included)
//				answers.push_back(i);
//		}
//	}
//
//	return answers.size();
//}
//
//int main()
//{
//	vector<vector<string>> relation = { {"100", "ryan", "music", "2"},
//	{"200", "appeach", "math", "2"},
//	{"300", "tube", "computer", "3"},
//	{"400", "con", "computer", "4"},
//	{"500", "muzi", "music", "3"},
//	{"600", "appeach", "music", "2"} };
//	solution(relation);
//
//	return 0;
//}