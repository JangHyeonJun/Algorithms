//#include <iostream>
//
//using namespace std;
//long long dp[101];
//
//long long lengthOfSide(int p)
//{
//	if (p == 1 || p == 2 || p == 3)
//	{
//		dp[p] = 1;
//	}
//	else
//	{
//		if (dp[p] == -1)
//			dp[p] = lengthOfSide(p - 2) + lengthOfSide(p - 3);
//	}
//
//	return dp[p];
//}
//int main()
//{
//	
//	int N, P;
//	cin >> N;
//
//	//initialize dp array
//	for (int i = 1; i < 101; i++)
//	{
//		dp[i] = -1;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> P;
//		cout << lengthOfSide(P) << '\n';
//	}
//}