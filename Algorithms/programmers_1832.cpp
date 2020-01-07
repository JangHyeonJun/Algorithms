//#include <vector>
//
//using namespace std;
//
//int MOD = 20170805;
//
//int solution(int m, int n, vector<vector<int>> city_map) {
//
//	vector<vector<vector<int>>> dp(m, vector<vector<int>>(n,
//		vector<int>(2, 0)));
//	dp[0][0][0] = 1;// 0 right, 1 down
//	for (int i = 0; i < m; i++)
//		for (int j = 0; j < n; j++)
//		{
//			if (city_map[i][j] == 1)
//				dp[i][j][0] = dp[i][j][1] = 0;
//			else
//			{
//				if (j > 0)
//				{
//					if (city_map[i][j - 1] != 2)
//						dp[i][j][0] += dp[i][j - 1][1] % MOD;
//					dp[i][j][0] += dp[i][j - 1][0] % MOD;
//				}
//				if (i > 0)
//				{
//					if (city_map[i - 1][j] != 2)
//						dp[i][j][1] += dp[i - 1][j][0] % MOD;
//					dp[i][j][1] += dp[i - 1][j][1] % MOD;
//
//				}
//
//			}
//		}
//
//	return (dp[m - 1][n - 1][0] + dp[m - 1][n - 1][1]) % MOD;
//}
//
//int main()
//{
//	vector<vector<int>> v = { {0,2,0,0,0,2},{0,0,2,0,1,0},{1,0,0,2,2,0} };
//	solution(3, 6, v);
//}