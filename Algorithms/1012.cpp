//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int max_m = 50;
//const int max_n = 50;
//
//int M, N, K;
//
//bool cabbage[max_n][max_m];
//bool visit[max_n][max_m];
//
//void PrintVisit()
//{
//	for (int y = 0; y < N; y++)
//	{
//		for (int x = 0; x < M; x++)
//		{
//			if (visit[y][x])
//				cout << 1;
//			else
//				cout << 0;
//		}
//		cout << '\n';
//	}
//	cout << '\n';
//}
//
//void InitArray()
//{
//	for (int y = 0; y < max_n; y++)
//		for (int x = 0; x < max_m; x++)
//		{
//			cabbage[y][x] = false;
//			visit[y][x] = false;
//		}
//}
//
//bool IsCabbage(int y, int x)
//{
//	bool is_cabbage = false;
//	if (cabbage[y][x] && !visit[y][x])
//	{
//		is_cabbage = true;
//		visit[y][x] = true;
//
//		if (x > 0)
//			IsCabbage(y, x - 1);
//		if (x < M - 1)
//			IsCabbage(y, x + 1);
//		if (y > 0)
//			IsCabbage(y - 1, x);
//		if (y < N - 1)
//			IsCabbage(y + 1, x);
//	}
//	
//	return is_cabbage;
//}
//
//int CountWorms()
//{
//	int count = 0;
//	for(int y=0; y < N; y++)
//		for (int x = 0; x < M; x++)
//		{
//			if (IsCabbage(y, x))
//			{
//				count++;
//				//PrintVisit();
//			}
//		}
//	return count;
//}
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		cin >> M >> N >> K;
//		InitArray();
//		for (int i = 0; i < K; i++)
//		{
//			int X, Y;
//			cin >> X >> Y;
//			cabbage[Y][X] = true;
//		}
//		cout << CountWorms() << '\n';
//	}
//	return 0;
//}