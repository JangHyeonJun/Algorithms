//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//
//	int N, M, Max, buf;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		buf = i;
//		M = i;
//		
//		for (Max = 100000; Max >= 1; Max /= 10)
//		{
//			if (buf >= Max)
//			{
//				M += buf / Max;
//				buf = buf % Max;
//			}
//		}
//		
//		if (N == M)
//		{
//			cout << i;
//			return 0;
//		}
//	}
//	cout << 0;
//
//	return 0;
//}