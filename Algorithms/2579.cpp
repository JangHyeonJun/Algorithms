//#include <iostream>
//
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//
//using namespace std;
//
//// 0번째 원소는 이전 계단을 안밟았을 경우
//// 1번째 원소는 이전 계단을 밟았을 경우
//int dp[300][2];
//short score[300];
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < 300; i++)
//		score[i] = -1;
//	for (int i = 0; i < n; i++)
//		cin >> score[i];
//
//	dp[0][0] = dp[0][1] = score[0];
//	dp[1][0] = score[1];
//	dp[1][1] = score[0] + score[1];
//
//	for (int i = 2; i < 300; i++)
//	{
//		dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + score[i];
//		dp[i][1] = dp[i - 1][0] + score[i];
//	}
//
//	cout << max(dp[n - 1][0], dp[n - 1][1]);
//
//	return 0;
//}