#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int max_num = 32000;

bool graph[max_num + 1][max_num + 1];
bool start[max_num + 1];
bool visit[max_num + 1];
int main()
{
	queue<int> q;
	vector<int> v;
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		start[i] = true;

	for (int i = 1; i <= M; i++)
	{
		int A, B;
		cin >> A >> B;
		graph[A][B] = true;
		start[B] = false;
	}
	for (int i = 1; i <= N; i++)
		if (start[i])
		{
			q.push(i);
			visit[i] = true;
		}
	

	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		v.push_back(node);
		for (int i = 1; i <= N; i++)
			if (!visit[i] && graph[node][i])
			{
				q.push(i);
				visit[i] = true;
			}
	}
	for (int i = 1; i <= N; i++)
		if (!visit[i])
			v.push_back(i);

	for (auto& iter : v)
		cout << iter << ' ';


	return 0;
}