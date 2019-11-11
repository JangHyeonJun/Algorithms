//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//vector<pair<int, string>> getSortedVector(const map<string, int>& m)
//{
//	vector<pair<int, string>> v;
//	for (auto iter = m.begin(); iter != m.end(); iter++)
//	{
//		v.push_back(make_pair(iter->second, iter->first));
//	}
//	sort(v.begin(), v.end(), [](const pair<int, string>& p1,
//		const pair<int, string>& p2)->bool 
//		{ return p1.first > p2.first;});
//
//	return v;
//}
//
//pair<string, int> makeUserInfo(const string& str)
//{
//	char d = ' ';
//	size_t d_index = str.find(d);
//	string name = str.substr(0, d_index);
//	string s_score = str.substr(d_index + 1,
//		str.length() - name.length() - 1);
//	int score = atoi(s_score.c_str());
//
//	return make_pair(name, score);
//}
//
//int main()
//{
//	int K = 3;
//	int answer = 0;
//	vector<string> user_scores = {"alex111 100",
//	"c2 200", "coco 150", "luna 100", "alex111 120",
//	"coco 300", "c2 110"};
//	/*vector<string> user_scores = { "alex111 100",
//	"c2 200", "alex111 200", "c2 150", "coco 50",
//	"coco 200" };*/
//	map<string, int> m;
//	vector<pair<int, string>> prev_pv;
//	for (int i = 0; i < user_scores.size(); i++)
//	{
//		pair<string, int> user_info = makeUserInfo(user_scores[i]);
//		if (m.find(user_info.first) != m.end())
//		{
//			if(m[user_info.first] < user_info.second)
//				m[user_info.first] = user_info.second;
//		}
//		else
//			m[user_info.first] = user_info.second;
//		vector<pair<int, string>> pv = getSortedVector(m);
//
//		bool updated = false;
//		if (prev_pv.size() < K)
//		{
//			if (pv.size() > prev_pv.size())
//			{
//				updated = true;
//			}
//		}
//		else
//		{
//			for (int j = 0; j < K; j++)
//			{
//				if (prev_pv[j].second != pv[j].second)
//				{
//					updated = true;
//					break;
//				}
//			}
//		}
//
//		if (updated)
//			answer++;
//
//		prev_pv = pv;
//	}
//	cout << answer;
//}