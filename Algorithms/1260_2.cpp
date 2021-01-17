//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//const int MAX_N = 1001;
//const int MAX_M = 10001;
//
//int n, m, v;
//
//bool graph[MAX_N][MAX_M];
//bool visit[MAX_N];
//
//void InitVisit()
//{
//	for (int i = 0; i < MAX_N; i++)
//		visit[i] = false;
//}
//
//void dfs(int node)
//{
//	visit[node] = true;
//	cout << node << ' ';
//
//	for (int i = 1; i <= n; i++)
//		if (!visit[i] && graph[node][i])
//			dfs(i);
//}
//
//void bfs(int node)
//{
//	queue<int> q;
//	q.push(node);
//	visit[node] = true;
//
//	while(!q.empty())
//	{
//		node = q.front();
//		q.pop();
//		cout << node << ' ';
//
//		for (int i = 1; i <= n; i++)
//			if (!visit[i] && graph[node][i])
//			{
//				q.push(i);
//				visit[i] = true;
//			}
//	}
//}
//
//int main()
//{
//	// init graph
//	cin >> n >> m >> v;
//	int x, y;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x >> y;
//		graph[x][y] = graph[y][x] = true;
//	}
//
//	// dfs
//	dfs(v);
//
//	// init
//	InitVisit();
//	cout << endl;
//
//	// bfs
//	bfs(v);
//}