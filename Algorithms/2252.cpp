//#include <iostream>
//
//using namespace std;
//const int max_num = 100000;
//int arr[max_num + 1];
//int G, P;
//
//void init()
//{
//	for (int i = 0; i <= G; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//int find_group(int n)
//{
//	if (arr[n] == n)
//		return n;
//	else
//		return arr[n] = find_group(arr[n]); // Path Compression
//}
//
//
//void union_group(int a, int b)
//{
//	int group_a = find_group(a);
//	int group_b = find_group(b);
//
//	if (group_a == group_b)
//		return union_group(group_a, group_b - 1);
//
//	arr[group_a] = group_b;
//}
//
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int count = 0;
//	cin >> G >> P;
//	init();
//
//	for (int i = 1; i <= P; i++)
//	{
//		int n;
//		cin >> n;
//		int gate = find_group(n);
//		if (gate > 0)
//		{
//			union_group(n, n - 1);
//			count++;
//		}
//		else
//			break;
//	}
//
//	cout << count;
//
//	return 0;
//}