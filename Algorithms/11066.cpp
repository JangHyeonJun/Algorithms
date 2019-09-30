//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int max_int = 2100000000;
//
//int GetCost(vector<int> arr)
//{
//	vector<vector<int>> dp(arr.size() + 1, vector<int>(arr.size() + 1, 0));
//	vector<int> sum(arr.size() + 1, 0);
//	for (int i = 1; i <= arr.size(); i++)
//		sum[i] = sum[i - 1] + arr[i - 1];
//	for (int i = 1; i < arr.size(); i++)
//	{
//		for (int j = 1; j + i <= arr.size(); j++)
//		{
//			dp[j][j + i] = max_int;
//			for (int k = j; k < j + i; k++)
//			{
//				dp[j][j + i] = min(dp[j][j + i],
//					dp[j][k] + dp[k + 1][j + i] + sum[j + i] - sum[j - 1]);
//			}
//		}
//	}
//
//	return dp[1][arr.size()];
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		int K;
//		cin >> K;
//		vector<int> v(K);
//		for (int j = 0; j < K; j++)
//			cin >> v[j];
//
//		cout << GetCost(v) << '\n';
//	}
//	return 0;
//}