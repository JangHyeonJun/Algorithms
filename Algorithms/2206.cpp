//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct POS
//{
//	int row;
//	int col;
//	bool crash;
//};
//
//int N, M;
//bool visited[1000][1000][2];
//
//void bfs(const vector<vector<bool>>& wall)
//{
//	for(int i=0; i<1000; i++)
//		for (int j = 0; j < 1000; j++)
//		{
//			visited[i][j][0] = false;
//			visited[i][j][1] = false;
//		}
//	queue<POS> q;
//	q.push({ 0,0,false });
//	int dist = 1;
//	while (!q.empty())
//	{
//		queue<POS> temp = q;
//		while (!q.empty())
//			q.pop();
//		while (!temp.empty())
//		{
//			POS p = temp.front();
//			temp.pop();
//			if (p.row == N - 1 && p.col == M - 1)
//			{
//				cout << dist;
//				return;
//			}
//			if (p.crash)
//			{
//				if (visited[p.row][p.col][1])
//					continue;
//				visited[p.row][p.col][1] = true;
//			}
//			else
//			{
//				if (visited[p.row][p.col][0])
//					continue;
//				visited[p.row][p.col][0] = true;
//			}
//			if (p.col < M - 1 && wall[p.row][p.col + 1] && !p.crash)
//				q.push({ p.row, p.col + 1, true });
//			if (p.col < M - 1 && !wall[p.row][p.col + 1])
//				q.push({ p.row, p.col + 1, p.crash });
//			if (p.col > 0 && wall[p.row][p.col - 1] && !p.crash)
//				q.push({ p.row, p.col - 1, true });
//			if (p.col > 0 && !wall[p.row][p.col - 1])
//				q.push({ p.row, p.col - 1, p.crash });
//			if (p.row < N - 1 && wall[p.row + 1][p.col] && !p.crash)
//				q.push({ p.row + 1, p.col, true });
//			if (p.row < N - 1 && !wall[p.row + 1][p.col])
//				q.push({ p.row + 1, p.col, p.crash });
//			if (p.row > 0 && wall[p.row - 1][p.col] && !p.crash)
//				q.push({ p.row - 1, p.col, true });
//			if (p.row > 0 && !wall[p.row - 1][p.col])
//				q.push({ p.row - 1, p.col, p.crash });
//
//		}
//		dist++;
//	}
//	cout << -1;
//}
//
//int main()
//{
//	cin >> N >> M;
//	vector<vector<bool>> wall(N, vector<bool>(M, false));
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			char input;
//			cin >> input;
//			if(input == '0')
//				wall[i][j] = false;
//			else
//				wall[i][j] = true;
//		}
//	bfs(wall);
//	return 0;
//}