//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//struct edge
//{
//	int u, v, w;
//	edge(int _u, int _v, int _w) : u(_u), v(_v), w(_w) {}
//	bool operator<(const edge& other) const
//	{
//		return w > other.w;
//	}
//};
//
//const int max_node = 10000;
//
//int union_tree[max_node + 1];
//int V, E;
//
//int find(int node)
//{
//	while (node != union_tree[node])
//		node = union_tree[node];
//	return node;
//}
//
//int main()
//{
//	cin >> V >> E;
//	priority_queue<edge> pq;
//	int sum = 0;
//	for (int i = 0; i < V + 1; i++)
//		union_tree[i] = i;
//
//	for (int i = 0; i < E; i++)
//	{
//		int depart, arrival, weight;
//		cin >> depart >> arrival >> weight;
//		pq.push(edge(depart, arrival, weight));
//	}
//
//	while (!pq.empty())
//	{
//		edge e = pq.top();
//		pq.pop();
//		if (find(e.v) == find(e.u))
//			continue;
//
//		if (union_tree[e.v] == e.v)
//			union_tree[e.v] = e.u;
//		else
//			if (union_tree[e.u] == e.u)
//				union_tree[e.u] = e.v;
//			else
//			{
//				int other_union = find(e.v);
//				union_tree[other_union] = e.u;
//			}
//		
//		sum += e.w;
//	}
//
//	cout << sum;
//
//
//	return 0;
//}