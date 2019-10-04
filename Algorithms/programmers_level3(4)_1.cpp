//#include <string>
//#include <vector>
//
//using namespace std;
//
//long dp[2001];
//
//int countCase(int n)
//{
//	dp[0] = 1;
//	dp[1] = 2;
//	for (int i = 2; i < n; i++)
//		if (dp[i] == 0)
//		{
//			dp[i] = dp[i - 1] + dp[i - 2];
//			if (dp[i] >= 1234567)
//				dp[i] %= 1234567;
//		}
//	
//	return dp[n - 1];
//}
//
//long long solution(int n) {
//	long long answer = 0;
//	answer = countCase(n);
//	return answer;
//}