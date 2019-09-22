#include <iostream>
#include <string>
#include <vector>

using namespace std;

inline int max(int x, int y){ return x > y ? x : y; }

vector<vector<int>> dp(1001, vector<int>(1001, 0));

int LCS(string s1, string s2)
{
	for (int i = 1; i <= s1.length(); i++)
	{
		for (int j = 1; j <= s2.length(); j++)
		{
			if (s1[i-1] == s2[j-1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	return dp[s1.length()][s2.length()];
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << LCS(s1, s2);
	return 0;
}