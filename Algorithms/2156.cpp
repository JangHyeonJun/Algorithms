//#include <iostream>
//
//using namespace std;
//
//#define __max(a,b) (((a) > (b)) ? (a) : (b))
//
//int dp[10000][3];
//int wine[10000];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> wine[i];
//
//	dp[0][0] = dp[0][1] = dp[0][2] = wine[0];
//	dp[1][0] = wine[1];
//	dp[1][1] = wine[0] + wine[1];
//	dp[1][2] = wine[1]; 
//	dp[2][0] = wine[2];
//	dp[2][1] = wine[2] + __max(dp[1][0], dp[1][2]);
//	dp[2][2] = wine[2] + __max(dp[0][0], __max(dp[0][1], dp[0][2]));
//
//	for (int i = 3; i < n; i++)
//	{
//		dp[i][0] = wine[i] + __max(dp[i - 3][0], __max(dp[i - 3][1], dp[i - 3][2]));
//		dp[i][1] = wine[i] + __max(dp[i - 1][0], dp[i - 1][2]);
//		dp[i][2] = wine[i] + __max(dp[i - 2][0], __max(dp[i - 2][1], dp[i - 2][2]));
//	}
//
//	int max = -1;
//	for (int i = n - 3; i < n; i++)
//		for (int j = 0; j < 3; j++)
//			if (max < dp[i][j])
//				max = dp[i][j];
//	cout << max;
//
//	return 0;
//}