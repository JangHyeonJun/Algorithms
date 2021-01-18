//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//#include <map>
//using namespace std;
//
//typedef pair<int, string> IS;
//typedef pair<int, int> II;
//const string max_city_string = "~~~~~~~~~~~";
//
//vector<string> closestStraightCity(const vector<string>& c,
//	const vector<int>& x, const vector<int>& y, const vector<string>& q)
//{
//	vector<string> closest_cities(q.size());
//	unordered_map<string, II> m;
//	unordered_map<int, multimap<int, string>> m_x, m_y;
//
//	for (int i = 0; i < c.size(); i++)
//	{
//		string city = c[i];
//		int city_x = x[i];
//		int city_y = y[i];
//
//		m[city] = II(city_x, city_y);
//		m_x[city_x].insert(make_pair(city_y, city));
//		m_y[city_y].insert(make_pair(city_x, city));
//	}
//
//	for (int i = 0; i < q.size(); i++)
//	{
//		string city = q[i];
//		int city_x = m[city].first;
//		int city_y = m[city].second;
//		int min_dist = INT_MAX;
//		string min_city = max_city_string;
//
//		if (m_x[city_x].size() > 1) // 자신이 아닌 같은 x좌표 도시가 있으면
//		{
//			if (m_x[city_x].count(city_y) > 1) // 같은 y좌표가 여러개 일 경우
//			{
//				auto range = m_x[city_x].equal_range(city_y);
//				min_dist = 0;
//				for (auto iter = range.first; iter != range.second; iter++)
//					if (iter->second != city)
//						if(iter->second < min_city)
//							min_city = iter->second;
//			}
//			else
//			{
//				auto small = --m_x[city_x].lower_bound(city_y);
//				auto big = ++m_x[city_x].lower_bound(city_y);
//
//				if (small != m_x[city_x].end() && small->first != city_y) // 작은 y좌표가 있을 경우
//				{
//					auto range = m_x[city_x].equal_range(small->first);
//					for (auto iter = range.first; iter != range.second; iter++)
//					{
//						int dist = abs(iter->first - city_y);
//						string other = iter->second;
//						if (dist == min_dist && other < min_city)
//							min_city = other;
//						else if (other != city && dist < min_dist)
//						{
//							min_dist = dist;
//							min_city = other;
//						}
//					}
//				}
//				if (big != m_x[city_x].end() && big->first != city_y) // 큰 y좌표가 있을 경우
//				{
//					auto range = m_x[city_x].equal_range(big->first);
//					for (auto iter = range.first; iter != range.second; iter++)
//					{
//						int dist = abs(iter->first - city_y);
//						string other = iter->second;
//						if (dist == min_dist && other < min_city)
//							min_city = other;
//						else if (other != city && dist < min_dist)
//						{
//							min_dist = dist;
//							min_city = other;
//						}
//					}
//				}
//			}
//		}
//
//		if (m_y[city_y].size() > 1) // 자신이 아닌 같은 y좌표 도시가 있으면
//		{
//			if (m_y[city_y].count(city_x) > 1) // 같은 x좌표가 여러개 일 경우
//			{
//				auto range = m_y[city_y].equal_range(city_x);
//				min_dist = 0;
//				for (auto iter = range.first; iter != range.second; iter++)
//					if (iter->second != city)
//						if (iter->second < min_city)
//							min_city = iter->second;
//			}
//			else
//			{
//				auto small = --m_y[city_y].lower_bound(city_x);
//				auto big = ++m_y[city_y].lower_bound(city_x);
//
//				if (small != m_y[city_y].end() && small->first != city_x) // 작은 x좌표가 있을 경우
//				{
//					auto range = m_y[city_y].equal_range(small->first);
//					for (auto iter = range.first; iter != range.second; iter++)
//					{
//						int dist = abs(iter->first - city_x);
//						string other = iter->second;
//						if (dist == min_dist && other < min_city)
//							min_city = other;
//						else if (dist < min_dist)
//						{
//							min_dist = dist;
//							min_city = other;
//						}
//					}
//				}
//				if (big != m_y[city_y].end() && big->first != city_x) // 큰 x좌표가 있을 경우
//				{
//					auto range = m_y[city_y].equal_range(big->first);
//					for (auto iter = range.first; iter != range.second; iter++)
//					{
//						int dist = abs(iter->first - city_x);
//						string other = iter->second;
//						if (dist == min_dist && other < min_city)
//							min_city = other;
//						else if (dist < min_dist)
//						{
//							min_dist = dist;
//							min_city = other;
//						}
//					}
//				}
//			}
//		}
//
//		if (min_city == max_city_string)
//			closest_cities[i] = "NONE";
//		else
//			closest_cities[i] = min_city;
//	}
//
//	return closest_cities;
//}
//
//int main()
//{
//	vector<string> c = { "fastcity", "bigbanana", "xyz" };
//	vector<int> x = { 23,23,23 };
//	vector<int> y = { 1,10,20 };
//	vector<string> q = { "fastcity", "bigbanana", "xyz" };
//
//	vector<string> c2 = { "london", "warsaw", "hackerland" };
//	vector<int> x2 = { 1,10,20 };
//	vector<int> y2 = { 1,10,10 };
//	vector<string> q2 = { "london", "warsaw", "hackerland" };
//
//	closestStraightCity(c2, x2, y2, q2);
//
//	return 0;
//}