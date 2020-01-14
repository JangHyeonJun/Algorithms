//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> dist;
//
//void dfs(const vector<vector<int>>& graph, vector<bool>& visited, int curr = 1)
//{
//	for (int i = 2; i < visited.size(); i++)
//	{
//		if (!visited[i] && graph[curr][i] != 0 &&
//			dist[i] > dist[curr] + graph[curr][i])
//		{
//			dist[i] = dist[curr] + graph[curr][i];
//			visited[i] = true;
//			dfs(graph, visited, i);
//			visited[i] = false;
//		}
//	}
//}
//
//int solution(int N, vector<vector<int>> road, int K) {
//	int answer = 0;
//	vector<vector<int>> graph(N+1, vector<int>(N+1, 0));
//	vector<bool> visited(N + 1, false);
//	dist.assign(N + 1, 987654321);
//	dist[1] = 0;
//	for (int i = 0; i < road.size(); i++)
//	{
//		int a = road[i][0];
//		int b = road[i][1];
//		int c = road[i][2];
//		if (graph[a][b] == 0 || graph[a][b] > c)
//			graph[a][b] = graph[b][a] = c;
//	}
//
//	dfs(graph, visited);
//
//	for (int i = 1; i < dist.size(); i++)
//		if (dist[i] <= K)
//			answer++;
//
//	return answer;
//}
//
//int main()
//{
//	vector<vector<int>> v = { {1,2,1},{2,3,3},{5,2,2},{1,4,2},{5,3,1},{5,4,2} };
//	vector<vector<int>> v2 = { {1,2,1},{1,3,2},{2,3,2},{3,4,3},{3,5,2},{3,5,3},{5,6,1} };
//	int n = solution(5, v, 3);
//	return 0;
//}