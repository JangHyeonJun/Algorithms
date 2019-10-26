//#include <iostream>
//
//using namespace std;
//
//const int max_num = 1000000;
//
//int arr[max_num + 1];
//
//int find_group(int n)
//{
//	while (arr[n] != n)
//		n = arr[n];
//	return n;
//}
//
//bool compare_group(int a, int b)
//{
//	if (find_group(a) == find_group(b))
//		return true;
//	return false;
//}
//
//void arr_union(int a, int b)
//{
//	int group_a = find_group(a);
//	int group_b = find_group(b);
//	if (b == group_b)
//		arr[b] = group_a;
//	else if (a == group_a)
//		arr[a] = group_b;
//	else
//		arr[group_b] = group_a;
//}
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//		arr[i] = i;
//
//	for (int i = 0; i < m; i++)
//	{
//		int command, a, b;
//		cin >> command >> a >> b;
//		if (command == 0)
//			arr_union(a, b);
//		else
//		{
//			if (compare_group(a, b))
//				cout << "YES\n";
//			else
//				cout << "NO\n";
//		}
//	}
//
//	return 0;
//}