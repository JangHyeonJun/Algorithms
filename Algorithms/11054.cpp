//#include <iostream>
//
//using namespace std;
//
//short dp[1000][2];
//short num[1000];
//
//int main()
//{
//	short n, max = 1;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//		cin >> num[i];
//
//	for (int i = 0; i < n; i++)
//	{
//		short left = 1, right = 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (num[j] < num[i] && dp[j][0] >= left)
//				left = dp[j][0] + 1;
//
//			if (num[n - j - 1] < num[n - i - 1] && dp[n - j - 1][1] >= right)
//				right = dp[n - j - 1][1] + 1;
//		}
//
//		dp[i][0] = left;
//		dp[n - i - 1][1] = right;
//	}
//
//	for (int i = 0; i < n; i++)
//		if (max < dp[i][0] + dp[i][1] - 1)
//			max = dp[i][0] + dp[i][1] - 1;
//	cout << max;
//
//	return 0;
//}