//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//using namespace std;
//
//typedef pair<int, int> II;
//typedef pair<int, pair<int, int>> III;
//const int dy[4] = { -1, 1, 0, 0 }; // up, down, left, right
//const int dx[4] = { 0, 0, -1, 1 };
//int node_size = 0;
//vector<int> parent;
//
//void initUnion(int size)
//{
//	parent.assign(size, 0);
//	for (int i = 0; i < size; i++)
//		parent[i] = i;
//}
//int find(int n)
//{
//	if (n == parent[n])
//		return n;
//	return parent[n] = find(parent[n]);
//}
//void merge(int u, int v)
//{
//	u = find(u);
//	v = find(v);
//	if (u == v)
//		return;
//	else
//		parent[v] = u;
//}
//
//struct pair_hash
//{
//	template <class T1, class T2>
//	size_t operator() (const pair<T1, T2>& p) const {
//		return hash<T1>()(p.first) ^ hash<T2>()(p.second);
//	}
//};
//
//struct POS {
//	int x, y, dist;
//	POS(int _x, int _y, int _dist) :x(_x), y(_y), dist(_dist) {}
//};
//
//void swap(int& x, int& y)
//{
//	int tmp = move(x);
//	x = move(y);
//	y = move(tmp);
//}
//
//unordered_map<II, int, pair_hash> makeEdges(const vector<vector<int>>& maze, int x, int y)
//{
//	int max_y = maze.size();
//	int max_x = maze[0].size();
//
//	unordered_multimap<II, int, pair_hash> node; // node_index
//	node.insert(make_pair(II(0, 0), 0));
//	int node_index = 1;
//	for (int i = 0; i < max_y; i++)
//		for (int j = 0; j < max_x; j++)
//			if (maze[i][j] == 2)
//				node.insert(make_pair(II(j, i), node_index++));
//	node.insert(make_pair(II(x, y), node_index));
//	node_size = node.size();
//
//	unordered_map<II, int, pair_hash> edges; // II(u, v) : node_index, node_index, dist
//
//	for (auto iter = node.begin(); iter != node.end(); iter++)
//	{
//		vector<vector<bool>> visited(max_y, vector<bool>(max_x, false));
//
//		queue<POS> q;
//		visited[iter->first.second][iter->first.first] = true;
//		q.push(POS(iter->first.first, iter->first.second, 0));
//
//		while (!q.empty())
//		{
//			POS p = q.front();
//			q.pop();
//
//
//			if (node.find(II(p.x, p.y)) != node.end())
//			{
//				auto lower = node.equal_range(II(p.x, p.y)).first;
//				auto upper = node.equal_range(II(p.x, p.y)).second;
//				for (; lower != upper; lower++)
//				{
//					int u = iter->second;
//					int v = lower->second;
//					if (u > v)
//						swap(u, v);
//					if (u != v)
//						edges[II(u, v)] = p.dist;
//				}
//			}
//
//			for (int j = 0; j < 4; j++)
//			{
//				int n_y = p.y + dy[j];
//				int n_x = p.x + dx[j];
//				if (n_x < max_x && n_x >= 0 &&
//					n_y < max_y && n_y >= 0 &&
//					maze[n_y][n_x] != 1 && !visited[n_y][n_x])
//				{
//					visited[n_y][n_x] = true;
//					q.push(POS(n_x, n_y, p.dist + 1));
//				}
//			}
//
//		}
//	}
//
//	return edges;
//}
//
//bool isEndNode(III n)
//{
//	if (n.second.first == 0 || n.second.second == 0 ||
//		n.second.first == node_size - 1 || n.second.second == node_size - 1)
//		return true;
//	return false;
//}
//
//int minMoves(vector<vector<int>> maze, int x, int y)
//{
//	// x = col , y = row
//	int temp = x;
//	x = y;
//	y = temp;
//
//	int min_moves = 0;
//
//	unordered_map<II, int, pair_hash> edges = makeEdges(maze, x, y);
//
//	// 무방향 완전 그래프는 항상 N * (N-1) / 2 개의 간선 갯수를 가짐
//	if (edges.size() != node_size * (node_size - 1) / 2)
//		return -1;
//
//	deque<III> dq;
//	deque<III> end_dq;
//	for (auto iter = edges.begin(); iter != edges.end(); iter++)
//	{
//		int u = iter->first.first;
//		int v = iter->first.second;
//		int dist = iter->second;
//		dq.push_back(III(dist, II(u, v)));
//	}
//
//	sort(dq.begin(), dq.end());
//
//	vector<int> connected(node_size, 0); // 경로를 체크하기 위해 연결된 간선 수 체크
//	connected[0] = connected[node_size - 1] = 1; // 출발, 목적지 간선은 1개만
//	bool all_connected = false;
//
//	initUnion(node_size); // 순환 제거를 위해 유니온-파인드 사용
//
//	while (!dq.empty())
//	{
//		auto iter = dq.begin();
//		while (iter+1 != dq.end() && 
//			iter->first == (iter + 1)->first && isEndNode(*iter))
//		{
//			iter++;
//		}
//		int dist = iter->first;
//		int u = iter->second.first;
//		int v = iter->second.second;
//		dq.erase(iter);
//
//		if (connected[u] < 2 && connected[v] < 2 && find(u) != find(v))
//		{
//			min_moves += dist;
//			connected[u]++;
//			connected[v]++;
//
//			cout << "[" << u << "," << v << "] : " << dist << endl;
//		}
//	}
//
//	cout << "x,y : [" << x << ", " << y << "]" << endl;
//	cout << " maze ---- " << endl;
//	for (int i = 0; i < maze.size(); i++)
//	{
//		for (int j = 0; j < maze[0].size(); j++)
//		{
//			cout << maze[i][j];
//		}
//		cout << endl;
//	}
//	cout << " connected ---- " << endl;
//	for (int i = 0; i < connected.size(); i++)
//		cout << connected[i] << ' ';
//	cout << endl;
//	cout << " min_moves ---- " << endl;
//	cout << min_moves << endl;
//
//	return min_moves;
//}