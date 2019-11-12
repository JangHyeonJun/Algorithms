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