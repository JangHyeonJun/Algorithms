//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//#define INT_MAX 2147483647 / 2
//
//vector<vector<int>> graph;
//int node = 6;
//vector<vector<int>> edge{ {1,2,2}, {1,3,5}, {1,4,1},
//{2,4,2}, {2,3,3}, {3,4,3}, {3,5,1}, {3,6,5}, {4,5,1}, {5,6,2} };
//
//vector<int> dijkstra(int start = 0)
//{
//	vector<bool> visit(node, false);
//	vector<int> d(node, INT_MAX);
//	visit.assign(node, false);
//
//	for (int i = 0; i < node; i++)
//		d[i] = graph[start][i];
//	visit[start] = true;
//
//	while (true)
//	{
//		int min = INT_MAX;
//		int min_index = -1;
//		for (int i = 0; i < node; i++)
//		{
//			if (!visit[i] && min > d[i])
//			{
//				min = d[i];
//				min_index = i;
//			}
//		}
//		if (min_index == -1)
//			break;
//
//		visit[min_index] = true;
//		for (int i = 0; i < node; i++)
//		{
//			if (!visit[i])
//			{
//				if (d[min_index] + graph[min_index][i] < d[i])
//					d[i] = d[min_index] + graph[min_index][i];
//			}
//		}
//	}
//	return d;
//}
//
//int main()
//{
//	graph.assign(node, vector<int>(node, INT_MAX));
//	// edge에는 노드1, 노드2, 가중치(비용)가 차례대로 들어가도록
//
//	for (int i = 0; i < node; i++)
//		graph[i][i] = 0;
//	for (int i = 0; i < edge.size(); i++)
//	{
//		int u = edge[i][0] - 1;
//		int v = edge[i][1] - 1;
//		int w = edge[i][2];
//		graph[u][v] = graph[v][u] = w;
//		// 무방향 그래프 일 경우 graph[v][u] = w 를 추가
//	}
//
//	for (int i = 0; i < node; i++)
//	{
//		vector<int> d = dijkstra(i);
//		cout << i + 1 << "번째 노드의 최소 거리는 ";
//		for (int j = 0; j < d.size(); j++)
//			cout << d[j] << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}