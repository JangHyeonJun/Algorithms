//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define maxN 1001
//#define maxM 10001
//
//int n, m, v;
//bool graph[maxN][maxM];
//bool visit[maxN];
//
//void dfs(int start)
//{
//	cout << start << ' ';
//	visit[start] = true;
//	for (int i = 1; i <= n; i++)
//	{
//		if (visit[i] || !graph[start][i])
//			continue;
//		dfs(i);
//	}
//}
//
//void bfs(int start)
//{
//	queue<int> q;
//	q.push(start);
//	visit[start] = true;
//	while (!q.empty())
//	{
//		int f = q.front();
//		cout << f << ' ';
//		q.pop();
//		for (int i = 1; i <= n; i++)
//		{
//			if (visit[i] || !graph[f][i])
//				continue;
//			q.push(i);
//			visit[i] = true;
//		}
//	}
//}
//
//void initVisit()
//{
//	for (int i = 0; i < maxN; i++)
//	{
//		visit[i] = false;
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> v;
//	for (int i = 0; i < m; i++)
//	{
//		int start, end;
//		cin >> start >> end;
//		graph[start][end] = graph[end][start] = true;
//	}
//	dfs(v);
//	cout << endl;
//	initVisit();
//	bfs(v);
//	return 0;
//}