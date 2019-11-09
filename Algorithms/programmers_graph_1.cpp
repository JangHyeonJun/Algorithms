//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int>> graph;
//vector<int> min_len;
//
//int count_max_node()
//{
//	int count = 1;
//	sort(min_len.begin(), min_len.end());
//	auto iter = min_len.rbegin()+1;
//	while (*iter == *min_len.rbegin() && iter != min_len.rend())
//	{
//		count++;
//		iter++;
//	}
//
//	return count;
//}
//
//void dfs(vector<bool> visited, int node = 1, int len = 0)
//{
//	if (len >= visited.size()-2)
//		return;
//	else
//	{
//		if (min_len[node] > len)
//			min_len[node] = len;
//
//		for (int i = 0; i < graph[node].size(); i++)
//		{
//			int next = graph[node][i];
//			if (!visited[next])
//			{
//				visited[next] = true;
//				dfs(visited, next, len + 1);
//				visited[next] = false;
//			}
//		}
//	}
//}
//
//void bfs(vector<bool> visited)
//{
//	int len = 0;
//	queue<int> q;
//	q.push(1);
//	visited[1] = true;
//
//	while (!q.empty())
//	{
//		queue<int> temp_q;
//		while (!q.empty())
//		{
//			temp_q.push(q.front());
//			min_len[q.front()] = len;
//			q.pop();
//		}
//
//		while (!temp_q.empty())
//		{
//			int node = temp_q.front();
//			temp_q.pop();
//			for (int i = 0; i < graph[node].size(); i++)
//			{
//				int next = graph[node][i];
//				if (!visited[next])
//				{
//					visited[next] = true;
//					q.push(next);
//				}
//			}
//		}
//		
//		len++;
//	}
//}
//
//int solution(int n, vector<vector<int>> edge) {
//	vector<bool> visited(n + 1, false);
//	graph.assign(n + 1, vector<int>());
//	min_len.assign(n + 1, n);
//	min_len[0] = -1;
//	visited[1] = true;
//	for (int i = 0; i < edge.size(); i++)
//	{
//		int u = edge[i][0];
//		int v = edge[i][1];
//		graph[u].push_back(v);
//		graph[v].push_back(u);
//	}
//	
//	bfs(visited);
//
//	return count_max_node();
//}
//
//int main()
//{
//	vector<vector<int>> v = { {3,6}, {4,3}, {3,2}, {1,3}, {1,2}, {2,4}, {5,2} };
//	solution(6, v);
//}