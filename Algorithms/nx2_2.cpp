//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//#include <map>
//using namespace std;
//
//
//
///*
// * Complete the 'closestStraightCity' function below.
// *
// * The function is expected to return a STRING_ARRAY.
// * The function accepts following parameters:
// *  1. STRING_ARRAY c
// *  2. INTEGER_ARRAY x
// *  3. INTEGER_ARRAY y
// *  4. STRING_ARRAY q
// */
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
//	unordered_multimap<int, IS> mm_x, mm_y;
//
//	for (int i = 0; i < c.size(); i++)
//	{
//		string city = c[i];
//		int city_x = x[i];
//		int city_y = y[i];
//
//		m.insert(make_pair(city, II(city_x, city_y)));
//		mm_x.insert(make_pair(city_x, IS(city_y, city)));
//		mm_y.insert(make_pair(city_y, IS(city_x, city)));
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
//		if (mm_x.find(city_x) != mm_x.end()) // 같은 x좌표가 있으면
//		{
//			auto range = mm_x.equal_range(city_x);
//
//			for (auto iter = range.first; iter != range.second; iter++)
//			{
//				int dist = abs(iter->second.first - city_y);
//				string other = iter->second.second;
//				if (city != other)
//				{
//					if (dist < min_dist)
//					{
//						min_dist = dist;
//						min_city = other;
//					}
//					else if (dist == min_dist && other < min_city)
//						min_city = other;
//				}
//			}
//		}
//
//		if (mm_y.find(city_y) != mm_y.end()) // 같은 y좌표가 있으면
//		{
//			auto range = mm_y.equal_range(city_y);
//
//			for (auto iter = range.first; iter != range.second; iter++)
//			{
//				int dist = abs(iter->second.first - city_x);
//				string other = iter->second.second;
//				if (city != other)
//				{
//					if (dist < min_dist)
//					{
//						min_dist = dist;
//						min_city = other;
//					}
//					else if (dist == min_dist && other < min_city)
//						min_city = other;
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
//int main()
//{
//	vector<string> c = { "fastcity", "bigbanana", "xyz" };
//	vector<int> x = { 23,23,23 };
//	vector<int> y = { 1,10,20 };
//	vector<string> q = { "fastcity", "bigbanana", "xyz" };
//
//	closestStraightCity(c, x, y, q);
//
//	return 0;
//}