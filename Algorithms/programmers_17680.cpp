//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, string> IS;
//
//int solution(int cacheSize, vector<string> cities) {
//	int answer = 0;
//	unordered_map<string, int> um;
//	for (int i = 0; i < cities.size(); i++)
//		transform(cities[i].begin(), cities[i].end(), 
//			cities[i].begin(), ::tolower);
//	for (int i = 0; i < cities.size(); i++)
//	{
//		if (um.find(cities[i]) == um.end())
//		{
//			if (um.size() < cacheSize)
//				um.insert(make_pair(cities[i], i));
//			else if(cacheSize > 0)
//			{
//				priority_queue<IS, vector<IS>, greater<IS>> pq;
//				for (auto n : um)
//					pq.push(make_pair(n.second, n.first));
//				auto iter = um.find(pq.top().second);
//				um.erase(iter);
//				um.insert(make_pair(cities[i], i));
//			}
//			answer += 5;
//		}
//		else
//		{
//			um[cities[i]] = i;
//			answer++;
//		}
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<string> cities = { "Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome"};
//	solution(30, cities);
//}