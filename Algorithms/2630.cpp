//#include <iostream>
//
//using namespace std;
//
//int numPaper(int **paper, int n, int color, int row = 0, int col = 0)
//{
//	if (n == 1)
//	{
//		if (paper[row][col] == color)
//			return 1;
//		else
//			return 0;
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (paper[row + i][col + j] != color)
//					return numPaper(paper, n / 2, color, row, col)
//					+ numPaper(paper, n / 2, color, row, col + n / 2)
//					+ numPaper(paper, n / 2, color, row + n / 2, col)
//					+ numPaper(paper, n / 2, color, row + n / 2, col + n / 2);
//			}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int **paper = new int*[n];
//	for (int i = 0; i < n; i++)
//		paper[i] = new int[n];
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> paper[i][j];
//
//	cout << numPaper(paper, n, 0) << '\n' << numPaper(paper, n, 1);
//
//	return 0;
//}