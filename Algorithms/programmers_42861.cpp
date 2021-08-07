//#include <string>
//#include <vector>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//
//bool IsConnected(int depart, int arrival, const int& n, const vector<vector<bool>>& visits)
//{
//	vector<bool> temp(n);
//	stack<int> s;
//	s.push(depart);
//
//	while (!s.empty())
//	{
//		auto curr = s.top();
//		temp[curr] = true;
//		s.pop();
//
//		if (curr == arrival)
//			return true;
//
//		for (int i = 0; i < n; i++)
//		{
//			if (!temp[i] && visits[curr][i])
//			{
//				s.push(i);
//				temp[i] = true;
//			}
//		}
//	}
//
//	return false;
//}
//
//int solution(int n, vector<vector<int>> costs) {
//	int answer = 0;
//	int edges = 0;
//	vector<vector<bool>> visits(n, vector<bool>(n, false));
//	sort(costs.begin(), costs.end(),
//		[](auto first, auto second) -> bool {return first[2] < second[2]; });
//	for (auto cost : costs)
//	{
//		int depart = cost[0];
//		int arrival = cost[1];
//
//		if (IsConnected(depart, arrival, n, visits) == false)
//		{
//			visits[depart][arrival] = visits[arrival][depart] = true;
//			edges++;
//			answer += cost[2];
//		}
//
//		if (edges == n - 1)
//			break;
//	}
//
//	return answer;
//}
//
//
//int main()
//{
//	vector<vector<int>> v1 = { {0,1,1}, {0,2,2}, {1,2,5}, {1,3,1}, {2,3,8} };
//	vector<vector<int>> v2 = { {0,1,4},{0,2,2},{0,3,1},{3,2,1},{3,1,1} };
//	vector<vector<int>> v3 = { {0,1,1}, {0,2,1}, {0,3,1} };
//	vector<vector<int>> v4 = { {0,1,5}, {1,2,3}, {2,3,3}, {3,1,2}, {3,0,4}, {2,4,6}, {4,0,7} };
//	solution(5, v4);
//	return 0;
//}
//
//
//
//
//
////// 과거 풀이
///*
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int max_num = 100;
//int arr[max_num];
//
//int find(int n)
//{
//	if (arr[n] == n)
//		return n;
//	else
//		return arr[n] = find(arr[n]);
//}
//
//bool union_arr(int a, int b)
//{
//	int root_a = find(a);
//	int root_b = find(b);
//
//	if (root_a == root_b)
//		return false;
//
//	arr[root_a] = root_b;
//	return true;
//}
//
//int solution(int n, vector<vector<int>> costs) {
//	int cost = 0;
//	sort(costs.begin(), costs.end(),
//		[](const vector<int>& a, const vector<int>& b) {return a[2] < b[2]; });
//
//	for (int i = 0; i < max_num; i++)
//		arr[i] = i;
//
//	for (int i = 0; i < costs.size(); i++)
//	{
//		int u = costs[i][0];
//		int v = costs[i][1];
//		if (union_arr(u, v))
//			cost += costs[i][2];
//	}
//
//	return cost;
//}
//
////
////int main()
////{
////	vector<vector<int>> v = { {0,1,1}, {0,2,2}, {1,2,5}, {1,3,1}, {2,3,7} };
////	solution(4, v);
////	return 0;
////}
//*/