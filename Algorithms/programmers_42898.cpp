//#include <string>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//int solution(int m, int n, vector<vector<int>> puddles) {
//	set<pair<int, int>> puddleSet;
//	for (auto& p : puddles)
//		puddleSet.insert(make_pair(p[0] - 1, p[1] - 1));
//
//	vector<vector<int>> wayCount(m, vector<int>(n, 0));
//	wayCount[0][0] = 1;
//
//	for (int i = 0; i < m; i++)
//		for (int j = 0; j < n; j++)
//		{
//			if (puddleSet.find(make_pair(i, j)) != puddleSet.end())
//				continue;
//			if (i + 1 < m)
//				wayCount[i + 1][j] = (wayCount[i + 1][j] + wayCount[i][j]) % 1000000007;
//			if (j + 1 < n)
//				wayCount[i][j + 1] = (wayCount[i][j + 1] + wayCount[i][j]) % 1000000007;
//		}
//
//	int answer = wayCount[m - 1][n - 1];
//	return answer;
//}
//
//int main()
//{
//	solution(4, 3, { {2,2} });
//	return 0;
//}
//
//
//
////// 이전 풀이
///*
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int m, int n, vector<vector<int>> puddles) {
//	int answer = 0;
//	vector<vector<int>> map(n + 1, vector<int>(m + 1, 0));
//	for (int i = 0; i < puddles.size(); i++)
//		map[puddles[i][1]][puddles[i][0]] = -1;
//	map[1][1] = 1;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			if (map[i][j] == -1)
//				map[i][j] = 0;
//			else if(i != 1 || j != 1)
//				map[i][j] = (map[i-1][j] + map[i][j-1]) % 1000000007;
//
//
//	return map[n][m];
//}
//*/