#include <iostream>

using namespace std;
const int max_num = 100000;
bool visit[max_num + 1];
int G, P;

bool can_docking(int n)
{
	for (int i = n; i >= 1; i--)
		if (!visit[i])
		{
			visit[i] = true;
			return true;
		}
	return false;
}


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int count = 0;
	cin >> G >> P;

	for (int i = 1; i <= P; i++)
	{
		int n;
		cin >> n;
		if (can_docking(n))
			count++;
		else
			break;
	}

	cout << count;

	return 0;
}