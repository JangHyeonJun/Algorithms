//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n, m;
//bool flag[9] = { false, };
//vector<int> v(9);
//
//void dfs(int count = 0)
//{
//	if (count == m)
//	{
//		for (int i = 0; i < m; i++)
//			cout << v[i] << ' ';
//		cout << '\n';
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (flag[i])
//				continue;
//			flag[i] = true;
//			v[count] = i;
//			dfs(++count);
//			flag[i] = false;
//			count--;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	dfs();
//	return 0;
//}