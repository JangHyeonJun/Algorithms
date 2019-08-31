#include <iostream>

using namespace std;

#define maxN 1001
#define maxM 10001

int n, m, v;
bool graph[maxN][maxM];
bool visit[maxN];

void dfs(int start)
{
	cout << start << ' ';
	visit[start] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (visit[i] || !graph[start][i])
			continue;
		dfs(i);
	}
}
//https://jun-itworld.tistory.com/18 ÂüÁ¶
int main()
{
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++)
	{
		int start, end;
		cin >> start >> end;
		graph[start][end] = graph[end][start] = 1;
	}
	dfs(v);
	cout << endl;
	return 0;
}