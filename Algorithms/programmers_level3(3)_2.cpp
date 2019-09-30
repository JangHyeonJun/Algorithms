//#include <string>
//#include <vector>
//#include <map>
//#include <iostream>
//using namespace std;
//
//vector<string> getPath(vector<vector<string>> tickets)
//{
//	multimap<string, string> m;
//	for (int i = 0; i < tickets.size(); i++)
//	{
//		string depart = tickets[i][0];
//		string arrival = tickets[i][1];
//
//		m.insert(make_pair(depart, arrival));
//	}
//
//	vector<string> path;
//	string start = "ICN";
//	path.push_back(start);
//	while (m.find(start) != m.end())
//	{
//		auto iter_pair = m.equal_range(start);
//		map<string, string>::iterator iter;
//		string min = "ZZZ";
//		for (auto i = iter_pair.first; i != iter_pair.second; i++)
//		{
//			string arrival = i->second;
//			if (arrival <= min)
//			{
//				iter = i;
//				min = i->second;
//			}
//		}
//		string arrival = iter->second;
//		start = arrival;
//		path.push_back(arrival);
//		m.erase(iter);
//	}
//
//	return path;
//}
//
//vector<string> solution(vector<vector<string>> tickets) {
//	vector<string> answer;
//	answer = getPath(tickets);
//	return answer;
//}
//
////int main()
////{
////	vector<vector<string>> v = { {"ICN", "SFO"}, {"ICN", "ATL"}, {"SFO", "ATL"}, {"ATL", "ICN"}, {"ATL","SFO"} };
////	solution(v);
////	return 0;
////}