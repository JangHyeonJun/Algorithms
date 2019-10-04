//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int M, N, H;
//
//struct III
//{	
//	int h, row, col;
//	III(int _h, int _row, int _col) : h(_h), row(_row), col(_col) {};
//};
//
//
//short tomato[101][101][101];
//bool visit[101][101][101];
//
//bool isAllRipe()
//{
//	for (int i = 0; i < H; i++)
//		for (int j = 0; j < N; j++)
//			for (int k = 0; k < M; k++)
//				if (tomato[i][j][k] == 0)
//					return false;
//	return true;
//}
//
//bool ripen(int h, int row, int col)
//{
//	if (h < 0 || h >= H)
//		return false;
//	if (row < 0 || row >= N)
//		return false;
//	if (col < 0 || col >= M)
//		return false;
//	if (tomato[h][row][col] == -1 || visit[h][row][col])
//		return false;
//	tomato[h][row][col] = 1;
//	visit[h][row][col] = true;
//
//	return true;
//}
//
//int GetDay()
//{
//	queue<III> q;
//	int day = -1;
//	for (int i = 0; i < H; i++)
//		for (int j = 0; j < N; j++)
//			for (int k = 0; k < M; k++)
//			{
//				if (tomato[i][j][k] == 1)
//				{
//					q.push(III(i, j, k));
//					visit[i][j][k] = true;
//				}
//			}
//
//	while (!q.empty())
//	{
//		day++;
//		queue<III> buf;
//		buf = q;
//		q = queue<III>();
//		while (!buf.empty())
//		{
//			III curr = buf.front();
//			buf.pop();
//			if (ripen(curr.h + 1, curr.row, curr.col))
//				q.push(III(curr.h + 1, curr.row, curr.col));
//			if(ripen(curr.h - 1, curr.row, curr.col))
//				q.push(III(curr.h - 1, curr.row, curr.col));
//			if(ripen(curr.h, curr.row + 1, curr.col))
//				q.push(III(curr.h, curr.row + 1, curr.col));
//			if(ripen(curr.h, curr.row - 1, curr.col))
//				q.push(III(curr.h, curr.row - 1, curr.col));
//			if(ripen(curr.h, curr.row, curr.col + 1))
//				q.push(III(curr.h, curr.row, curr.col + 1));
//			if(ripen(curr.h, curr.row, curr.col - 1))
//				q.push(III(curr.h, curr.row, curr.col - 1));
//		}
//	}
//
//	if (!isAllRipe())
//		return -1;
//	return day;
//}
//
//int main()
//{
//	cin >> M >> N >> H;
//	for(int i=0; i<H; i++)
//		for(int j=0; j<N; j++)
//			for (int k = 0; k < M; k++)
//				cin >> tomato[i][j][k];
//
//	cout << GetDay();
//	return 0;
//}