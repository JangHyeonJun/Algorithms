//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n, m;
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
//			if (count > 0 && i < v[count - 1])
//				continue;
//			v[count] = i;
//			dfs(++count);
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