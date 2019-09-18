//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef pair<int, int> ii;
//vector<vector<ii>> graph;
//vector<bool> visit;
//
//ii dfs(int start)
//{
//	int maxDist = 0;
//	int maxNode = start;
//	visit[start] = true;
//	for (int i = 0; i < graph[start].size(); i++)
//	{
//		int node = graph[start][i].first;
//		int dist = graph[start][i].second;
//		if (visit[node])
//			continue;
//
//		visit[node] = true;
//		ii distAndNode = dfs(node);
//		dist = dist + distAndNode.first;
//		if (dist > maxDist)
//		{
//			maxDist = dist;
//			maxNode = distAndNode.second;
//		}
//		visit[node] = false;
//	}
//	return make_pair(maxDist, maxNode);
//}
//
//int main()
//{
//	int v;
//	cin >> v;
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	graph.assign(v, vector<ii>());
//
//	for (int i = 0; i < v - 1; i++)
//	{
//		int vertex, node, dist;
//		cin >> vertex >> node >> dist;
//		graph[vertex - 1].push_back(make_pair(node - 1, dist));
//		graph[node - 1].push_back(make_pair(vertex - 1, dist));
//	}
//	int max = 0;
//
//	visit.assign(v, false);
//	ii	distAndNode = dfs(0);
//	visit.assign(v, false);
//	distAndNode = dfs(distAndNode.second);
//
//	cout << distAndNode.first;
//	return 0;
//}