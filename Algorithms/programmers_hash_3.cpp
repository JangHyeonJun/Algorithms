//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int solution(vector<vector<string>> clothes) {
//
//	unordered_map<string, int> um;
//	for (int i = 0; i < clothes.size(); i++)
//	{
//		auto item = um.find(clothes[i][1]);
//		if (item == um.end())
//			um.insert(make_pair(clothes[i][1], 1));
//		else
//			item->second++;
//	}
//	int answer = 1;
//	for (auto iter : um)
//	{
//		answer *= iter.second + 1;
//	}
//	return answer - 1;
//}