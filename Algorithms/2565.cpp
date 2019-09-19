#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int, int> II;
int line[501];

int main()
{
	int n;
	int removeNum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int A, B;
		cin >> A >> B;
		line[A] = B;
	}
	sort(line, line + n);

	return 0;
}