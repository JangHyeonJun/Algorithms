//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int dp[1001][3];
//	short price[1001][3];
//
//	int N;
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//		cin >> price[i][0] >> price[i][1] >> price[i][2];
//
//	// initialize
//	for (int i = 1; i < 1001; i++)
//		dp[i][0] = dp[i][1] = dp[i][2] = -1;
//
//	dp[1][0] = price[1][0];
//	dp[1][1] = price[1][1];
//	dp[1][2] = price[1][2];
//
//	for (int i = 2; i <= N; i++)
//	{
//		if (dp[i - 1][1] <= dp[i - 1][2])
//			dp[i][0] = dp[i - 1][1] + price[i][0];
//		else
//			dp[i][0] = dp[i - 1][2] + price[i][0];
//
//		if (dp[i - 1][0] <= dp[i - 1][2])
//			dp[i][1] = dp[i - 1][0] + price[i][1];
//		else
//			dp[i][1] = dp[i - 1][2] + price[i][1];
//
//		if (dp[i - 1][0] <= dp[i - 1][1])
//			dp[i][2] = dp[i - 1][0] + price[i][2];
//		else
//			dp[i][2] = dp[i - 1][1] + price[i][2];
//	}
//
//	if (dp[N][0] <= dp[N][1] && dp[N][0] <= dp[N][2])
//		cout << dp[N][0];
//	else if (dp[N][1] <= dp[N][0] && dp[N][1] <= dp[N][2])
//		cout << dp[N][1];
//	else
//		cout << dp[N][2];
//
//	return 0;
//}