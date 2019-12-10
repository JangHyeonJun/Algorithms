//#include <string>
//#include <vector>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//
//typedef pair<int, int> II;
//
//int dfs(vector<int>& money, int n)
//{
//	sort(money.begin(), money.end(), greater<int>());
//	int case_num = 0;
//	stack<II> s;
//	for (int i = 0; i < money.size(); i++)
//		if (money[i] <= n)
//			s.push(make_pair(money[i], i));
//
//	while (!s.empty())
//	{
//		int curr = s.top().first;
//		int index = s.top().second;
//		s.pop();
//		if (curr == n)
//		{
//			case_num++;
//			continue;
//		}
//		for (int i = index; i < money.size(); i++)
//			if ((curr + money[i]) % 1000000007 <= n)
//				s.push(make_pair((curr + money[i]) % 1000000007, i));
//	}
//
//	return case_num;
//}
//
//int dp(vector<int>& money, int n)
//{
//	sort(money.begin(), money.end());
//	vector<int> dp(n + 1, 0);
//	dp[0] = 1;
//
//	for(int i=0; i<money.size(); i++)
//		for (int j = 1; j <= n; j++)
//			if (j - money[i] >= 0)
//				dp[j] += dp[j - money[i]] % 1000000007;
//		
//	return dp[n];
//}
//
//int solution(int n, vector<int> money) {
//	return dp(money, n);
//}
//
//int main()
//{
//	vector<int> v = { 1,2,5 };
//	solution(5, v);
//}