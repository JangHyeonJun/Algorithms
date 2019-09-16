//#include <string>
//#include <vector>
//#include <stack>
//using namespace std;
//
//typedef pair<int, int> ii;
//
//bool graph[102][102];
//long long num[102][102];
//
//
//int solution(int m, int n, vector<vector<int>> puddles) {
//	int answer = 0;
//
//	for (int i = 0; i < 102; i++)
//		for (int j = 0; j < 102; j++)
//		{
//			graph[i][j] = false;
//			num[i][j] = 0;
//		}
//	for (int i = 0; i < puddles.size(); i++)
//		graph[puddles[i][0]][puddles[i][1]] = true;
//
//	num[1][1] = 1;
//	for(int i=1; i<=m; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			if (graph[i][j])
//				num[i][j] = 0;
//			num[i][j] %= 1000000007;
//			num[i][j + 1]+= num[i][j];
//			num[i + 1][j]+= num[i][j];
//		}
//	answer = num[m][n];
//	return answer;
//}