//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//typedef pair<int, int> II;
//
//int solution(int m, int n, vector<vector<int>> puddles) {
//	vector<vector<bool>> map(n + 1, vector <bool>(m + 1, false));
//	vector<vector<int>> path(n + 1, vector<int>(m + 1, 0));
//	for (int i = 0; i < puddles.size(); i++)
//	{
//		int pos_n = puddles[i][1];
//		int pos_m = puddles[i][0];
//		map[pos_n][pos_m] = true;
//	}
//
//	queue<II> q;
//	path[1][1] = 1;
//	q.push(make_pair(1, 1));
//	while (!q.empty())
//	{
//		int pos_n = q.front().first;
//		int pos_m = q.front().second;
//		q.pop();
//		map[pos_n][pos_m] = true;
//
//
//		if (pos_n < n && !map[pos_n + 1][pos_m])
//		{
//			path[pos_n + 1][pos_m] ++;
//			if (path[pos_n + 1][pos_m] >= 1000000007)
//				path[pos_n + 1][pos_m] %= 1000000007;
//			q.push(make_pair(pos_n + 1, pos_m));
//		}
//
//		if (pos_m < m && !map[pos_n][pos_m + 1])
//		{
//			path[pos_n][pos_m + 1] ++;
//			if (path[pos_n][pos_m + 1] >= 1000000007)
//				path[pos_n][pos_m + 1] %= 1000000007;
//			q.push(make_pair(pos_n, pos_m + 1));
//		}
//	}
//
//	return path[n][m];
//
//}
////
////int main()
////{
////	vector<vector<int>> v = { {2,2},  {4,2} };
////	int result = solution(4, 3, v);
////
////	return 0;
////}