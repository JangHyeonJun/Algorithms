//#include <iostream>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <unordered_map>
//
//using namespace std;
//
//#define INF 2147483647 / 4
//typedef pair<int, int> ii;
//
//int N, E;
//priority_queue<ii> pq;
//vector<vector<ii>> edge;
//
//int dijkstra(int start, int dest)
//{
//	vector<int> d(N, INF);
//	d[start] = 0;
//	pq.push(make_pair(d[start], start));
//
//	while (!pq.empty())
//	{
//		int dist = pq.top().first;
//		int curr = pq.top().second;
//		pq.pop();
//
//		if (d[curr] < dist)
//			continue;
//
//		for (int i = 0; i < edge[curr].size(); i++)
//		{
//			int nextDist = edge[curr][i].first;
//			int next = edge[curr][i].second;
//			if (d[next] > dist + nextDist)
//			{
//				d[next] = dist + nextDist;
//				pq.push(make_pair(d[next], next));
//			}
//		}
//	}
//
//	return d[dest];
//}
//
//int getMinDist(int node1, int node2)
//{
//	int middleDist = dijkstra(node1, node2);
//	int startToNode1 = dijkstra(0, node1);
//	int startToNode2 = dijkstra(0, node2);
//	int destToNode1 = dijkstra(N - 1, node1);
//	int destToNode2 = dijkstra(N - 1, node2);
//
//	int path1 = startToNode1 + destToNode2 + middleDist;
//	int path2 = startToNode2 + destToNode1 + middleDist;
//
//	if (path1 >= INF && path2 >= INF)
//		return -1;
//
//	return path1 < path2 ? path1 : path2;
//}
//
//int main(){
//	cin >> N >> E;
//	edge.assign(N, vector<ii>());
//
//	for (int i = 0; i < E; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		edge[a - 1].push_back(make_pair(c, b - 1));
//		edge[b - 1].push_back(make_pair(c, a - 1));
//	}
//	int node1, node2;
//	cin >> node1 >> node2;
//	cout << getMinDist(node1-1, node2-1);
//
//	return 0;
//}