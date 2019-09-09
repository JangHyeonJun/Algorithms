#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define INT_MAX 2147483647 / 2
typedef pair<int, int> ii;


int node = 6;
vector<vector<ii>> list;
vector<vector<int>> edge{ {1,2,2}, {1,3,5}, {1,4,1},
{2,4,2}, {2,3,3}, {3,4,3}, {3,5,1}, {3,6,5}, {4,5,1}, {5,6,2} };

vector<int> dijkstra(int start = 0)
{
	vector<int> d(node, INT_MAX);
	priority_queue<ii, vector<ii>, greater<ii>> pq;

	d[start] = 0;
	pq.push(make_pair(d[start], start));


	while (!pq.empty())
	{
		int dist = pq.top().first;
		int current = pq.top().second;
		pq.pop();

		// 큐에 담긴 값 중에 같은 노드에 대해 dist가 최소 값이 아닌데도
		// 담겨있는 값이 아래 for문을 돌지 못하도록 예외처리한다.
		// 아래 조건문을 지웠을 때 큐에 값을 push하는 횟수가 증가하게된다.
		if (dist > d[current])
			continue;

		// node의 갯수를 n,, edge의 갯수를 e라고 하고
		// 기존에 쓰던 인접 행렬(graph)로 알고리즘을 구현하면 시간복잡도 O(nlogn) / 공간복잡도 O(n^2) 
		// 인접 리스트(edge)로 알고리즘을 구현하면 시간복잡도 O(elogn) / 공간복잡도 O(V+E)이 된다.
		for (int i = 0; i < list[current].size(); i++)
		{
			int nextDist = list[current][i].first;
			int next = list[current][i].second;
			if (d[next] > dist + nextDist)
			{
				d[next] = dist + nextDist;
				pq.push(make_pair(d[next], next));
			}
		}
	}
	return d;
}

int main()
{
	list.assign(node, vector<ii>());
	for (int i = 0; i < edge.size(); i++)
	{
		int u = edge[i][0] - 1;
		int v = edge[i][1] - 1;
		int w = edge[i][2];
		list[u].push_back(make_pair(w, v));
		list[v].push_back(make_pair(w, u));
	}

	for (int i = 0; i < node; i++)
	{
		vector<int> d = dijkstra(i);
		cout << i + 1 << "번째 노드의 최소 거리는 ";
		for (int j = 0; j < d.size(); j++)
			cout << d[j] << ' ';
		cout << endl;
	}

	return 0;
}