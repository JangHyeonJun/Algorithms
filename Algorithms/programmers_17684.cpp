//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//unordered_map<string, int> initMap()
//{
//	unordered_map<string, int> um;
//	for (int i = 1; i <= 26; i++)
//	{
//		char c = 64 + i;
//		um.insert(make_pair(string(1,c), i));
//	}
//
//	return um;
//}
//
//vector<int> solution(string msg)
//{
//	vector<int> answer;
//	unordered_map<string, int> um = initMap();
//	int dict_index = 27;
//	while (!msg.empty())
//	{
//		string w, c;
//		int len = 1;
//		while (len <= msg.length() && um.find(msg.substr(0, len)) != um.end())
//			len++;
//		w = msg.substr(0, --len);
//		if (len < msg.length())
//			c = msg[len];
//		if (!c.empty())
//			um.insert(make_pair(w + c, dict_index++));
//		answer.push_back(um[w]);
//		msg.erase(0, len);
//	}
//	return answer;
//}
//
//int main()
//{
//	solution("TOBEORNOTTOBEORTOBEORNOT");
//}