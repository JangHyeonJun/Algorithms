//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//const int max_num = 20;
//
//vector<bool> joined(20, false);
//vector<int> teamA;
//vector<int> teamB;
//int min_diff = 987654321;
//
//int calculateDiff(const vector<vector<int>>& graph)
//{
//	int A = 0, B = 0;
//	for (int i = 0; i < teamA.size(); i++)
//		for (int j = 0; j < teamA.size(); j++)
//		{
//			A += graph[teamA[i]][teamA[j]];
//			B += graph[teamB[i]][teamB[j]];
//		}
//
//	return abs(A - B);
//}
//
//void dfs(const vector<vector<int>>& graph, int curr = 0)
//{
//	if (min_diff == 0)
//		return;
//	if (graph.size() / 2 == teamA.size())
//	{
//		for (int i = 0; i < graph.size(); i++)
//			if (!joined[i])
//				teamB.push_back(i);
//			
//		int diff = calculateDiff(graph);
//		if (diff < min_diff)
//			min_diff = diff;
//
//		teamB.clear();
//	}
//	else
//	{
//		for (int i = curr; i < graph.size(); i++)
//		{
//			if (!joined[i])
//			{
//				joined[i] = true;
//				teamA.push_back(i);
//
//				dfs(graph, i);
//
//				teamA.pop_back();
//				joined[i] = false;
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int N;
//	cin >> N;
//	vector<vector<int>> graph(N, vector<int>(N, 0));
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			cin >> graph[i][j];
//
//	dfs(graph);
//
//	cout << min_diff;
//	return 0;
//}