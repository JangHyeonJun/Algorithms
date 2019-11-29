//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int min_time = 987654321;
//
//void bfs(int K, int N)
//{
//	int time = 0;
//	queue<int> q;
//	vector<bool> visited(100001, false);
//	q.push(N);
//
//	while (!q.empty())
//	{
//		queue<int> temp = q;
//		while (!q.empty())
//			q.pop();
//
//		while (!temp.empty())
//		{
//			int num = temp.front();
//			temp.pop();
//			if (visited[num])
//				continue;
//			visited[num] = true;
//			if (num == K)
//			{
//				cout << time;
//				return;
//			}
//			if(num < K)
//				q.push(num + 1);
//			if(num > 0)
//				q.push(num - 1);
//			if(num < (K/2) + 2)
//				q.push(num * 2);
//		}
//		time++;
//	}
//}
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//	bfs(K, N);
//
//	return 0;
//}