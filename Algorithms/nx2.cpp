//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <map>
//using namespace std;
//
//typedef pair<int, string> IS;
//const string max_city_string = "~~~~~~~~~~~";
//
//struct CITY_X
//{
//	int x, y;
//	string name;
//	bool operator<(const CITY_X& other)
//	{
//
//	}
//};
//
//vector<string> closestStraightCity(const vector<string>& c, 
//	const vector<int>& x, const vector<int>& y, const vector<string>& q)
//{
//	vector<string> closest_cities(q.size());
//	for (int i = 0; i < q.size(); i++)
//	{
//		string city = q[i];
//		int city_num, city_x, city_y;
//		int min_dist = INT_MAX;
//		string min_city = max_city_string;
//		for(int j=0; j<c.size(); j++)
//			if (c[j] == city)
//			{
//				city_num = j;
//				city_x = x[j];
//				city_y = y[j];
//				break;
//			}
//
//		for (int j = 0; j < c.size(); j++)
//		{
//			if (j != city_num && x[j] == city_x)
//			{
//				int dist = abs(city_y - y[j]);
//				if (dist < min_dist)
//				{
//					min_dist = dist;
//					min_city = c[j];
//				}
//				else if (dist == min_dist)
//				{
//					if (c[j] < min_city)
//						min_city = c[j];
//				}
//			}
//			if (j != city_num && y[j] == city_y)
//			{
//				int dist = abs(city_x - x[j]);
//				if (dist < min_dist)
//				{
//					min_dist = dist;
//					min_city = c[j];
//				}
//				else if (dist == min_dist)
//				{
//					if (c[j] < min_city)
//						min_city = c[j];
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
//	return 0;
//}