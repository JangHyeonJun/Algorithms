//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//int M, N;
//short tomato[1001][1001];
//bool visit[1001][1001];
//
//typedef pair<int, int> ii;
//
//bool isAllRipe()
//{
//	bool flag = true;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			if (tomato[i][j] == 0)
//				flag = false;
//	return flag;
//}
//
//bool ripen(int row, int col)
//{
//	if (row < 0 || row >= N)
//		return false;
//	if (col < 0 || col >= M)
//		return false;
//	if (visit[row][col] || tomato[row][col] == -1)
//		return false;
//
//	tomato[row][col] = 1;
//	visit[row][col] = true;
//	return true;
//}
//
//int GetDay()
//{
//	int day = -1;
//	queue<ii> q;
//	queue<ii> buf;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			if (tomato[i][j] == 1)
//			{
//				buf.push(make_pair(i, j));
//				visit[i][j] = true;
//			}
//
//	while (!buf.empty())
//	{
//		day++;
//		queue<ii> temp = buf;
//		buf = q;
//		q = temp;
//		while (!q.empty())
//		{
//			ii curr = q.front();
//			q.pop();
//			if (ripen(curr.first - 1, curr.second))
//				buf.push(make_pair(curr.first - 1, curr.second));
//			if (ripen(curr.first + 1, curr.second))
//				buf.push(make_pair(curr.first + 1, curr.second));
//			if (ripen(curr.first, curr.second - 1))
//				buf.push(make_pair(curr.first, curr.second - 1));
//			if (ripen(curr.first, curr.second + 1))
//				buf.push(make_pair(curr.first, curr.second + 1));
//		}
//	}
//
//	if (isAllRipe())
//		return day;
//	else
//		return -1;
//}
//
//int main()
//{
//	cin >> M >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> tomato[i][j];
//	cout << GetDay();
//	return 0;
//}