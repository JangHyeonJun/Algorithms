//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool comp(const pair<int, int> a, const pair<int, int> b)
//{
//	if (a.second > b.second)
//		return false;
//	else if (a.second == b.second)
//	{
//		if (a.first > b.first)
//			return false;
//		else if (a.first == b.first)
//			return true;
//		else
//			return true;
//	}
//	else
//		return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	pair<int, int> *conf = new pair<int, int>[n];
//
//	for (int i = 0; i < n; i++)
//		cin >> conf[i].first >> conf[i].second;
//
//	//quick_sort(conf, 0, n - 1);
//	sort(conf, conf + n, comp);
//	int last = 0;
//	int count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (conf[i].first >= last)
//		{
//			last = conf[i].second;
//			count++;
//		}
//	}
//
//	cout << count;
//
//	delete[] conf;
//
//
//	return 0;
//}