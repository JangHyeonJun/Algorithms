//#include <string>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//vector<int> solution(int n, vector<string> words) {
//	unordered_set<string> us;
//	string prev = words[0];
//	us.insert(prev);
//
//	for (int i = 1; i < words.size(); i++)
//	{
//		if (us.find(words[i]) == us.end())
//		{
//			us.insert(words[i]);
//			if (prev.back() == words[i].front())
//			{
//				prev = words[i];
//			}
//			else
//				return { i % n + 1 , i / n + 1};
//		}
//		else
//			return { i % n + 1 , i / n + 1 };
//	}
//
//	return {0, 0};
//}