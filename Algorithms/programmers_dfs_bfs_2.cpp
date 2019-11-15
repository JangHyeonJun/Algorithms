//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//
//int solution(int n, vector<vector<int>> computers) {
//	int answer = 0;
//
//	vector<bool> connected(n, false);
//
//	for (int i = 0; i < n; i++)
//	{
//		if (!connected[i])
//		{
//			connected[i] = true;
//			queue<int> q;
//			q.push(i);
//
//			while (!q.empty())
//			{
//				int node = q.front();
//				q.pop();
//				for (int j = 0; j < n; j++)
//				{
//					if (computers[node][j] == 1 && !connected[j])
//					{
//						connected[j] = true;
//						q.push(j);
//					}
//				}
//			}
//
//			answer++;
//		}
//	}
//
//
//	return answer;
//}