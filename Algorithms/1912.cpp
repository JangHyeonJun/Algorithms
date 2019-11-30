//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	vector<int> dp(n, 0);
//	
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//
//	dp[0] = v[0];
//	int max_sum = v[0];
//
//	for (int i = 1; i < v.size(); i++)
//	{
//		if (dp[i - 1] > 0)
//			dp[i] = v[i] + dp[i - 1];
//		else
//			dp[i] = v[i];
//		if (dp[i] > max_sum)
//			max_sum = dp[i];
//	}
//	cout << max_sum;
//
//	return 0;
//}