//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//#define INF 2147483647 / 2
//typedef pair<int, int> ii;
//
//int V, E, K;
//vector<vector<ii>> edge;
//priority_queue<ii, vector<ii>, greater<ii>> pq;
//
//vector<int> dijkstra(int start)
//{
//	vector<int> d;
//	d.assign(V, INF);
//
//	d[start] = 0;
//	pq.push(make_pair(d[start], start));
//	while (!pq.empty())
//	{
//		int dist = pq.top().first;
//		int curr = pq.top().second;
//		pq.pop();
//
//		if (d[curr] < dist)
//			continue;
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
//	return d;
//}
//
//int main()
//{
//	
//	cin >> V >> E >> K;
//	edge.assign(E, vector<ii>());
//	
//	for (int i = 0; i < E; i++)
//	{
//		int u, v, w;
//		cin >> u >> v >> w;
//		edge[u-1].push_back(make_pair(w, v - 1));
//	}
//	for (int i : dijkstra(K-1))
//		if (i != INF)
//			cout << i << '\n';
//		else
//			cout << "INF" << '\n';
//
//	return 0;
//}