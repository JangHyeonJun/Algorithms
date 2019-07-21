//#include <iostream>
//
//using namespace std;
//
//short dp[1000][2];
//
//int main()
//{
//	short n;
//	short max = 1;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//		cin >> dp[i][0];
//	dp[0][1] = 1;
//
//	for (int i = 1; i < n; i++)
//	{
//		short length = 1;
//		
//		for (int j = 0; j < i; j++)
//		{
//			if (dp[j][0] < dp[i][0])
//			{
//				if (length <= dp[j][1])
//					length = dp[j][1] + 1;
//			}
//		}
//
//		if (max < length)
//			max = length;
//
//		dp[i][1] = length;
//	}
//
//	cout << max;
//
//
//
//
//	return 0;
//}