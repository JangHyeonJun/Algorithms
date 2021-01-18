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
//	size_t operator() (const pair<T1,T2>& p) const {
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
//	 금화랑 겹칠수 있기 때문에 multimap 사용
//	unordered_multimap<II, int, pair_hash> node; // node_index
//	node.insert(make_pair(II(0, 0),0));
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
//int minMoves(vector<vector<int>> maze, int x, int y)
//{
//	 x = col , y = row
//	int temp = x;
//	x = y;
//	y = temp;
//
//	int min_moves = 0;
//
//	unordered_map<II, int, pair_hash> edges = makeEdges(maze, x, y);
//
//	 무방향 완전 그래프는 항상 N * (N-1) / 2 개의 간선 갯수를 가짐
//	if (edges.size() != node_size * (node_size - 1) / 2)
//		return -1;
//
//	priority_queue <III, vector<III>, greater<III>> pq_waypoint; // 경유지
//	priority_queue <III, vector<III>, greater<III>> pq; // 경유지 제외
//	for (auto iter = edges.begin(); iter != edges.end(); iter++)
//	{
//		int u = iter->first.first;
//		int v = iter->first.second;
//		int dist = iter->second;
//		if (u == 0 || u == node_size - 1 || v == 0 || v == node_size - 1)
//			pq.push(III(dist, II(u, v)));
//		else
//			pq_waypoint.push(III(dist, II(u, v)));
//	}
//
//	 길 없는 경우 체크하기
//
//	vector<int> connected(node_size, 0); // 경로를 체크하기 위해 연결된 간선 수 체크
//	connected[0] = connected[node_size - 1] = 1; // 출발, 목적지 간선은 1개만
//	bool all_connected = false;
//
//	initUnion(node_size); // 순환 제거를 위해 유니온-파인드 사용
//
//	while (!pq_waypoint.empty())
//	{
//		III curr = pq_waypoint.top();
//		int dist = curr.first;
//		int u = curr.second.first;
//		int v = curr.second.second;
//		pq_waypoint.pop();
//
//		if (connected[u] < 2 && connected[v] < 2 && find(u) != find(v))
//		{
//			min_moves += dist;
//			merge(u, v);
//			connected[u]++;
//			connected[v]++;
//		}
//	}
//	while (!pq.empty())
//	{
//		III curr = pq.top();
//		int dist = curr.first;
//		int u = curr.second.first;
//		int v = curr.second.second;
//		pq.pop();
//
//		if (connected[u] < 2 && connected[v] < 2)
//		{
//			min_moves += dist;
//			connected[u]++;
//			connected[v]++;
//		}
//	}
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
//
//int main()
//{
//
//	vector<vector<int>> v = { {0,2,1},{1,2,0},{1,0,0} }; // 1, 1 : 금화랑 혜교랑 겹칠경우
//	vector<vector<int>> v2 = { {0,2,0}, {0,0,1}, {1,1,1} }; // 1, 1 :2
//	vector<vector<int>> v3 = 
//	{ {0, 2, 0, 0, 0, 0,}, 
//	{0, 0, 0, 1, 0, 0},
//	{0, 1, 0, 1, 0, 2}, 
//	{0, 1, 0, 1, 1, 1}, 
//	{2, 1, 0, 0, 0, 0} };
//	vector<vector<int>> v4 = { {0,1,0},{1,0,1},{0,2,2} }; // 길없는 경우 1,1
//	vector<vector<int>> v5 =
//	{ {0, 0, 0, 0, 0},
//	{0, 0, 1, 1, 1},
//	{0, 0, 0, 0, 0},
//	{0, 0, 1, 0, 0} }; // 목적지로 가는 길 없는 경우 3, 4
//	vector<vector<int>> v6 = { {0} }; // 1*1 일 경우
//	vector<vector<int>> v7 = { {0,0,2,0,0} }; // 0, 4 : 4
//
//
//	minMoves(v7, 0, 4);
//	return 0;
//}
//
//vector<vector<int>> makeGraph(const vector<vector<int>>& maze, int x, int y)
//{
//	int max_y = maze.size();
//	int max_x = maze[0].size();
//
//	vector<II> golds;
//
//	for (int i = 0; i < max_y; i++)
//		for (int j = 0; j < max_x; j++)
//			if (maze[i][j] == 2)
//				golds.push_back(make_pair(j, i));
//
//	// 0 : S , 1 ~ n-2 : GOLD , n-1 : F
//	vector<vector<int>> dists(golds.size() + 2, vector<int>(golds.size() + 2, INT_MAX));
//
//	for (int i = 0; i < dists.size() - 1; i++)
//	{
//		vector<vector<bool>> visited(maze.size(), vector<bool>(maze[0].size(), false));
//		queue<POS> q;
//		if (i == 0)
//			q.push(POS(0, 0, 0));
//		else
//			q.push(POS(golds[i - 1].first, golds[i - 1].second, 0));
//
//		while (!q.empty())
//		{
//			POS p = q.front();
//			q.pop();
//			visited[p.y][p.x] = true;
//
//			if (p.dist > 0)
//			{
//				if (p.x == 0 && p.y == 0 && dists[0][i] > p.dist)
//					dists[0][i] = dists[i][0] = p.dist;
//				if (p.x == x && p.y == y && dists[dists.size() - 1][i] > p.dist)
//					dists[dists.size() - 1][i] = dists[i][dists.size() - 1] = p.dist;
//				if (maze[p.y][p.x] == 2)
//					for (int j = 0; j < golds.size(); j++)
//						if (i != j + 1 && golds[j].first == p.x &&
//							golds[j].second == p.y && dists[i][j + 1] > p.dist)
//							dists[i][j + 1] = dists[j + 1][i] = p.dist;
//			}
//			for (int j = 0; j < 4; j++)
//			{
//				int y = p.y + dy[j];
//				int x = p.x + dx[j];
//				if (x < maze[0].size() && x >= 0 &&
//					y < maze.size() && y >= 0 &&
//					maze[y][x] != 1 && !visited[y][x])
//					q.push(POS(x, y, p.dist + 1));
//			}
//
//		}
//	}
//
//	return dists;
//}
//int minMoves(vector<vector<int>> maze, int x, int y)
//{
//	// x = col , y = row
//	int temp = x;
//	x = y;
//	y = temp;
//
//	int min_moves = 0;
//	vector<vector<int>> graph = makeGraph(maze, x, y);
//	unordered_map<II, int, pair_hash> edges = makeEdges(maze, x, y);
//	if (!hasPath(graph))
//		return -1;
//
//	int size = graph.size();
//	vector<int> connected(size, 0);
//	connected[0] = connected[size - 1] = 1; // 출발, 목적지 간선은 1개만
//	bool all_connected = false;
//	while (!all_connected)
//	{
//		int min = INT_MAX;
//		int depart, dest;
//		depart = dest = 0;
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				if (connected[i] < 2 && connected[j] < 2)
//				{
//					if (graph[i][j] < min)
//					{
//						min = graph[i][j];
//						depart = i;
//						dest = j;
//					}
//				}
//			}
//		}
//
//		min_moves += min;
//		connected[depart]++;
//		connected[dest]++;
//
//		all_connected = true;
//		for (int i = 0; i < size; i++)
//			if (connected[i] != 2)
//				all_connected = false;
//	}
//
//	return min_moves;
//}