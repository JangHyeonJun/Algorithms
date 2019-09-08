//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int solution(vector<vector<string>> clothes) {
//	int answer = 1;
//	unordered_map<string, int> m;
//	for (int i = 0; i < clothes.size(); i++)
//	{
//		if (m.find(clothes[i][1]) == m.end())
//			m[clothes[i][1]] = 1;
//		else
//			m[clothes[i][1]]++;
//	}
//	auto iter = m.begin();
//	while (iter != m.end())
//	{
//		answer *= iter->second + 1;
//		iter++;
//	}
//	answer--;
//	return answer;
//}