//#include<iostream>
//
//using namespace std;
//
//long long dp[91];
//
//long long fibonacci(long long n)
//{
//	if (n == 0)
//	{
//		dp[0] = 0;
//		return 0;
//	}
//	else if (n == 1)
//	{
//		dp[1] = 1;
//		return 1;
//	}
//	else
//	{
//		if (dp[n] == -1)
//			dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
//		return dp[n];
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	// initialize dp
//	for (int i = 0; i < 91; i++)
//		dp[i] = -1;
//
//	cout << fibonacci(n);
//
//	return 0;
//}