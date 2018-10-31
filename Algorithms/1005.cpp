//#include <iostream>
//
//using namespace std;
//
//
//int T, N, K, W;
//int buildTime[1001];
//int dp[1001];
//pair<int, int> buildRule[1001];
//
//int getBuildTime(int building_num)
//{
//	if (building_num == 1)
//		return buildTime[0];
//	if (dp[building_num - 1] > 0)
//		return dp[building_num - 1];
//	else
//	{
//		for (int i = 0; i < K; i++)
//		{
//			if (buildRule[i].second == building_num)
//			{
//				if (dp[buildRule[i].first] > 0)
//				{
//					if (dp[building_num - 1] > 0)
//					{
//						if (dp[building_num - 1] < dp[buildRule[i].first] + buildTime[building_num - 1])
//							dp[building_num - 1] = dp[buildRule[i].first] + buildTime[building_num - 1];
//					}
//					else
//						dp[building_num - 1] = dp[buildRule[i].first] + buildTime[building_num - 1];
//				}
//				else
//				{
//					dp[buildRule[i].first] = getBuildTime(buildRule[i].first);
//				}
//			}
//		}
//		return dp[building_num - 1];
//	}
//}
//int main()
//{
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		for (int j = 0; j < 1001; j++)
//		{
//			buildTime[j] = -1;
//			dp[j] = -1;
//		}
//
//		cin >> N >> K;
//		for (int j = 0; j < N; j++)
//		{
//			cin >> buildTime[j];
//		}
//		for (int j = 0; j < K; j++)
//		{
//			cin >> buildRule[j].first >> buildRule[j].second;
//		}
//
//		cin >> W;
//
//		cout << getBuildTime(W);
//	}
//
//}