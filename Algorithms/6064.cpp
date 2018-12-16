#include <iostream>

using namespace std;

int main()
{
	int T, M, N, x, y, cx, cy, count;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> M >> N >> x >> y;
		while (true)
		{
			if (cx < M)
				cx++;
			else
				cx = 0;
			cy++;
			count++;
		}
	}

	return 0;
}