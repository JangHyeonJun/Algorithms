//#include <iostream>
//
//int dp[1001][1001];
//
//
//int main()
//{
//	int n, k;
//	std::cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0)
//				dp[i][j] = 1;
//			else
//				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10001;
//		}
//	}
//
//	std::cout << dp[n][k];
//
//	return 0;
//}