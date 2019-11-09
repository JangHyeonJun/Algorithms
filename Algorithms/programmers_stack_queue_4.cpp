//#include <string>
//#include <vector>
//#include <deque>
//#include <algorithm>
//using namespace std;
//
//// 최단 시간 찾는 풀이
////int solution(int bridge_length, int weight, vector<int> truck_weights) {
////	int currWeight = 0;
////	int time = 0;
////	deque<int> dq;
////	deque<pair<int, int>> bridge;
////	sort(truck_weights.begin(), truck_weights.end());
////
////	for (int n : truck_weights)
////		dq.push_back(n);
////
////	while (!dq.empty() || !bridge.empty())
////	{
////		time++;
////		auto iter = bridge.begin();
////		while (iter != bridge.end())
////		{
////			if (iter->second == 0)
////			{
////				currWeight -= iter->first;
////				iter = bridge.erase(iter);
////			}
////			else
////			{
////				iter->second--;
////				iter++;
////			}
////		}
////		if (!dq.empty() && bridge.size() < 2)
////		{
////			if (currWeight + dq.back() <= weight)
////			{		
////				bridge.push_back(make_pair(dq.back(), 1));
////				currWeight += dq.back();
////				dq.pop_back();
////			}
////			else if (currWeight + dq.front() <= weight)
////			{	
////				bridge.push_back(make_pair(dq.front(), 1));
////				currWeight += dq.front();
////				dq.pop_front();
////			}
////		}
////
////		int a = 1;
////	}
////
////
////	return time;
////}
//
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//	int currWeight = 0;
//	int time = 0;
//	deque<int> dq;
//	deque<pair<int, int>> bridge;
//
//	for (int n : truck_weights)
//		dq.push_back(n);
//
//	while (!dq.empty() || !bridge.empty())
//	{
//		time++;
//		auto iter = bridge.begin();
//		while (iter != bridge.end())
//		{
//			if (iter->second == 0)
//			{
//				currWeight -= iter->first;
//				iter = bridge.erase(iter);
//			}
//			else
//			{
//				iter->second--;
//				iter++;
//			}
//		}
//		if (!dq.empty() && currWeight + dq.front() <= weight)
//		{
//			bridge.push_back(make_pair(dq.front(), bridge_length - 1));
//			currWeight += dq.front();
//			dq.pop_front();
//
//		}
//	}
//
//
//	return time;
//}
//
////int main()
////{
////	int len = 2;
////	int weight = 10;
////	vector<int> v = { 7, 4, 5, 6 };
////	solution(len, weight, v);
////}