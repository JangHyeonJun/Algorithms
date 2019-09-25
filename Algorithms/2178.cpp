//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int max_int = 123456789;
//const int maxN = 100;
//const int maxM = 100;
//
//struct Dist
//{
//	int x, y, dist;
//	Dist(int _x, int _y, int _dist) : x(_x), y(_y), dist(_dist) {}
//};
//
//bool maze[maxN][maxM];
//int dist[maxN][maxM];
//
//int N, M;
//
//void InitArray()
//{
//	for (int i = 0; i < maxN; i++)
//		for (int j = 0; j < maxM; j++)
//		{
//			maze[i][j] = false;
//			dist[i][j] = max_int;
//		}
//	dist[0][0] = 1;
//}
//
//
//void UpdateDist()
//{
//	queue<Dist> q;
//	q.push(Dist(0, 0, 1));
//	while (!q.empty())
//	{
//		Dist d = q.front();
//		q.pop();
//		dist[d.y][d.x] = d.dist;
//		
//
//		if (d.y > 0 && maze[d.y - 1][d.x])
//		{
//			maze[d.y - 1][d.x] = false;
//			q.push(Dist(d.x, d.y - 1, d.dist + 1));
//		}
//		if (d.y < N - 1 && maze[d.y + 1][d.x])
//		{
//			maze[d.y + 1][d.x] = false;
//			q.push(Dist(d.x, d.y + 1, d.dist + 1));
//		}
//		if (d.x > 0 && maze[d.y][d.x - 1])
//		{
//			maze[d.y][d.x - 1] = false;
//			q.push(Dist(d.x - 1, d.y, d.dist + 1));
//		}
//		if (d.x < M - 1 && maze[d.y][d.x + 1])
//		{
//			maze[d.y][d.x + 1] = false;
//			q.push(Dist(d.x + 1, d.y, d.dist + 1));
//		}
//	}
//}
//
//int main()
//{
//	InitArray();
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			char input;
//			cin >> input;
//			if (input == '1')
//				maze[i][j] = true;
//		}
//	UpdateDist();
//	cout << dist[N - 1][M - 1];
//	return 0;
//}