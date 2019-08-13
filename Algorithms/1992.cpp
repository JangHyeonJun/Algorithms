//#include <iostream>
//#include <string>
//using namespace std;
//
//string resultEncode(int **video, int n, int row = 0, int col = 0)
//{
//	int color = video[row][col];
//	if (n == 1)
//		return to_string(color);
//	else
//	{
//		
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (video[row + i][col + j] != color)
//					return "(" + resultEncode(video, n / 2, row, col)
//					+ resultEncode(video, n / 2, row, col + n / 2)
//					+ resultEncode(video, n / 2, row + n / 2, col)
//					+ resultEncode(video, n / 2, row + n / 2, col + n / 2) + ")";
//			}
//	}
//	return to_string(color);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int **video = new int*[n];
//	for (int i = 0; i < n; i++)
//		video[i] = new int[n];
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//		{
//			char input;
//			cin >> input;
//			video[i][j] = input - 48;
//		}
//
//	cout << resultEncode(video, n);
//
//	return 0;
//}