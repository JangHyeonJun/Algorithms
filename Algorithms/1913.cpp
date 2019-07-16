//#include <iostream>
//
//using namespace std;
//
//int arr[999][999];
//
//int main()
//{
//	int n, m, row = 0, col = 0;
//
//	cin >> n >> m;
//	int move = n - 1;
//	int num = n * n;
//	while (move > 1)
//	{
//		arr[row][col] = num;
//		for (int i = 0; i < move; i++)
//		{
//			row++;
//			num--;
//			arr[row][col] = num;
//		}
//		for (int i = 0; i < move; i++)
//		{
//			col++;
//			num--;
//			arr[row][col] = num;
//		}
//		for (int i = 0; i < move; i++)
//		{
//			row--;
//			num--;
//			arr[row][col] = num;
//		}
//		for (int i = 0; i < move-1; i++)
//		{
//			col--;
//			num--;
//			arr[row][col] = num;
//		}
//		row++;
//		num--;
//		arr[row][col] = num;
//
//		move -= 2;
//	}
//	arr[row][col] = 1;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << arr[i][j];
//			if (j < n - 1)
//				cout << ' ';
//		}
//		cout << '\n';
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] == m)
//			{
//				cout << i+1 << ' ' << j+1;
//			}
//		}
//	}
//
//	return 0;
//}