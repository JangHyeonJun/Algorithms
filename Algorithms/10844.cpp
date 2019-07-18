//#include <iostream>
//
//using namespace std;
//
//int dp[100][10] = { 0, };
//
//int main()
//{
//	int n;
//	cin >> n;
//
//
//	for (int i = 1; i < 10; i++)
//		dp[0][i] = 1;
//
//	for (int i = 1; i < n; i++)
//	{
//		dp[i][0] = dp[i - 1][1] % 1000000000;
//		dp[i][9] = dp[i - 1][8] % 1000000000;
//		for (int j = 1; j < 9; j++)
//			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
//	}
//
//	if (n == 1)
//		cout << 9;
//	else
//	{
//		long long sum = 0;
//		for (int i = 0; i < 10; i++)
//			sum = (sum + dp[n - 1][i]) % 1000000000;
//		cout << sum;
//	}
//
//	return 0;
//}