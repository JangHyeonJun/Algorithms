//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <deque>
//using namespace std;
//
//#define maxN 27
//
//int n;
//bool map[maxN][maxN];
//bool flag[maxN][maxN];
//
//int dfs(int row = 0, int col = 0)
//{
//	int count = 1;
//	flag[row][col] = true;
//
//	if (row > 0 && map[row - 1][col] && !flag[row - 1][col])
//		count += dfs(row - 1, col);
//	if (col > 0 && map[row][col - 1] && !flag[row][col - 1])
//		count += dfs(row, col - 1);
//	if (row < n-1 && map[row + 1][col] && !flag[row + 1][col])
//		count += dfs(row + 1, col);
//	if (col < n-1 && map[row][col + 1] && !flag[row][col+1])
//		count += dfs(row, col + 1);
//	
//	return count;
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//		{
//			char input;
//			cin >> input;
//			if (input == '0')
//				map[i][j] = false;
//			else
//				map[i][j] = true;
//		}
//
//	priority_queue<int,vector<int>,greater<int>> q;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			if (map[i][j] && !flag[i][j])
//				q.push(dfs(i, j));
//
//	cout << q.size() << '\n';
//	while (!q.empty())
//	{
//		cout << q.top() << '\n';
//		q.pop();
//	}
//
//	return 0;
//}