//#include <iostream>
//#include <string>
//using namespace std;
//
//bool arrStar[3073][6145] = { false, };
//
//void makeTreeArray(int row, int col, int line)
//{
//	if (line <= 3)
//	{
//		arrStar[row][col] = true;
//
//		arrStar[row + 1][col - 1] = true;
//		arrStar[row + 1][col + 1] = true;
//
//		arrStar[row + 2][col - 2] = true;
//		arrStar[row + 2][col - 1] = true;
//		arrStar[row + 2][col] = true;
//		arrStar[row + 2][col + 1] = true;
//		arrStar[row + 2][col + 2] = true;
//	}
//	else
//	{
//		makeTreeArray(row, col, line / 2);
//		makeTreeArray(row + line / 2, col - line / 2, line / 2);
//		makeTreeArray(row + line / 2, col + line / 2, line / 2);
//	}
//}
//int main()
//{
//	int N;
//	cin >> N;
//	makeTreeArray(0, N-1, N);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N * 2 + 1; j++)
//		{
//			if (arrStar[i][j])
//				cout << '*';
//			else if (i == N - 1 && j > N * 2 - 2)
//				break;
//			else
//				cout << ' ';
//		}
//		cout << '\n';
//	}
//}