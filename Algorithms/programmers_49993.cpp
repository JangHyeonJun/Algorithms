//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int solution(string skill, vector<string> skill_trees) {
//	int answer = 0;
//
//	unordered_map<char, int> m;
//	for (int i = 0; i < skill.length(); i++)
//		m[skill[i]] = i;
//
//	for (int i = 0; i < skill_trees.size(); i++)
//	{
//		int index = 0;
//		bool usable = true;
//		for (int j = 0; j < skill_trees[i].length(); j++)
//		{
//			if (m.find(skill_trees[i][j]) != m.end())
//			{
//				if (m[skill_trees[i][j]] > index)
//				{
//					usable = false;
//					break;
//				}
//				index++;
//			}
//		}
//		if (usable)
//			answer++;
//	}
//
//	return answer;
//}