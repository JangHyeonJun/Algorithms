//#include <iostream>
//
//using namespace std;
//
//const int max_num = 200;
//int arr[max_num + 1];
//int graph[max_num + 1][max_num + 1];
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
//
//	int N, M;
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++)
//		arr[i] = i;
//
//	for (int i = 1; i <= N; i++)
//	{
//		arr[i] = i;
//		for (int j = 1; j <= N; j++)
//		{
//			bool is_connected;
//			if (i <= j)
//			{
//				cin >> is_connected;
//				continue;
//			}
//			cin >> is_connected;
//			if(is_connected)
//				arr_union(i, j);
//		}
//	}
//
//	int start, arrival;
//	cin >> start;
//	for (int i = 2; i <= M; i++)
//	{
//		cin >> arrival;
//		if (!compare_group(start, arrival))
//		{
//			cout << "NO";
//			return 0;
//		}
//		start = arrival;
//	}
//
//	cout << "YES";
//
//	return 0;
//}