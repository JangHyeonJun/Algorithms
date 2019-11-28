//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool comp(const pair<int, int>& a, const pair<int, int>& b)
//{
//	if (a.second == b.second)
//		return a.first < b.first;
//	return a.second < b.second;
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<pair<int, int>> schedules(n, pair<int, int>());
//
//	for (int i = 0; i < n; i++)
//		cin >> schedules[i].first >> schedules[i].second;
// 
//	sort(schedules.begin(), schedules.end(), comp);
//	int last = 0;
//	int count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (schedules[i].first >= last)
//		{
//			last = schedules[i].second;
//			count++;
//		}
//	}
//
//	cout << count;
//
//	return 0;
//}