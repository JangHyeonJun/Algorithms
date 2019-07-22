//#include <iostream>
//
//using namespace std;
//
//
//short dp[501][2];
//
//int main()
//{
//	short n;
//	short removeNum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		short A, B;
//		cin >> A >> B;
//		dp[A][0] = B;
//	}
//	for (int i = 0; i < 501; i++)
//	{
//		// 연결된 전깃줄이 있을 경우
//		if (dp[i][0] > 0)
//		{
//			for (int j = 0; j < 501; j++)
//			{
//				// 자신을 제외하고
//				if (i != j)
//				{
//					// 자신보다 낮은 번호(A)에서 높은 번호(B)로 연결되면 교차된다는 뜻
//					if (i > j && dp[j][0] != 0 && dp[j][0] > dp[i][0])
//						dp[i][1]++;
//					
//					// 반대의 경우
//					if (i < j && dp[j][0] != 0 && dp[j][0] < dp[i][0])
//						dp[i][1]++;
//				}
//			}
//		}
//	}
//	return 0;
//}