#include <iostream>

using namespace std;

#define __max(a,b) (((a) > (b)) ? (a) : (b))

int dp[10000][3];
int wine[10000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> wine[i];

	dp[0][0] = dp[0][1] = dp[0][2] = wine[0];
	dp[1][0] = wine[1];
	dp[1][1] = dp[0][0] + wine[1];
	dp[1][2] = wine[1];
	dp[2][0] = wine[2];
	dp[2][1] = __max(dp[0][0], dp[0][2])

	for (int i = 2; i < n; i++)
	{
		if (dp[i - 2][0] >= dp[i - 2][1])
			dp[i][0] = dp[i - 2][0] + wine[i];
		else
			dp[i][0] = dp[i - 2][1] + wine[i];
		dp[i][1] = dp[i - 1][0] + wine[i];
	}

	if (dp[n - 1][1] > dp[n - 1][0] && dp[n - 1][1] > dp[n - 2][1] && dp[n - 1][1] > dp[n - 2][0])
		cout << dp[n - 1][1];
	else if (dp[n - 1][0] > dp[n - 1][1] && dp[n - 1][0] > dp[n - 2][1] && dp[n - 1][0] > dp[n - 2][0])
		cout << dp[n - 1][0];
	else if (dp[n - 2][0] > dp[n - 2][1] && dp[n - 2][0] > dp[n - 1][0] && dp[n - 2][0] > dp[n - 1][1])
		cout << dp[n - 2][0];
	else
		cout << dp[n - 2][1];

	return 0;
}