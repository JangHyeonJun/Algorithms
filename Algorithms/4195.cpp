//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//const int max_num = 200000;
//int arr[max_num + 1][2];
//
//int find_group(int n)
//{
//	while (arr[n][0] != n)
//		n = arr[n][0];
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
//void union_arr(int a, int b)
//{
//	int group_a = find_group(a);
//	int group_b = find_group(b);
//	if (group_a == group_b)
//	{
//		cout << arr[group_a][1] << '\n';
//		return;
//	}
//	if (b == group_b)
//	{
//		arr[b][0] = group_a;
//		arr[group_a][1] += arr[b][1];
//		cout << arr[group_a][1] << '\n';
//	}
//	else if (a == group_a)
//	{
//		arr[a][0] = group_b;
//		arr[group_b][1] += arr[a][1];
//		cout << arr[group_b][1] << '\n';
//	}
//	else
//	{
//		arr[group_b][0] = group_a;
//		arr[group_a][1] += arr[group_b][1];
//		cout << arr[group_a][1] << '\n';
//	}
//}
//
//void init_arr(int n)
//{
//	for (int i = 1; i <= n*2; i++)
//	{
//		arr[i][0] = i;
//		arr[i][1] = 1;
//	}
//}
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int T;
//	cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		
//		int F;
//		cin >> F;
//		init_arr(F);
//		unordered_map<string, int> um;
//		int index = 1;
//		for (int j = 1; j <= F; j++)
//		{
//			string a, b;
//			cin >> a;
//			cin >> b;
//			auto iter_a = um.find(a);
//			auto iter_b = um.find(b);
//
//			if (iter_a == um.end())
//			{
//				um[a] = index;
//				index++;
//			}
//
//			if (iter_b == um.end())
//			{
//				um[b] = index;
//				index++;
//			}
//			auto aaa = um[a];
//			aaa = um[b];
//			union_arr(arr[um[a]][0], arr[um[b]][0]);
//		}
//
//	}
//	return 0;
//}