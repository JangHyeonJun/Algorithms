//#include<iostream>
//#include<string>
//
//#define SIZE 8*8
//
//using namespace std;
//
//char* copyBoard(int, int, int, int, char *);
//int countRedrawSquare(char *);
//
//int main()
//{
//	int N, M;
//
//	cin >> N >> M;
//	char *exam = (char*)malloc(sizeof(char)*N*M);
//	for (int i = 0; i < N*M; i++)
//		cin >> exam[i];
//
//	int min = SIZE;
//	int count = 0;
//	for (int i = 0; i < (N - 7); i++)
//		for (int j = 0; j < (M - 7); j++)
//		{
//			char *board = copyBoard(i, j, N, M, exam);
//			count = countRedrawSquare(board);
//
//			////debug
//			//cout << '[' << i << ',' << j << "]: " << count << endl;
//			//for (int n = 0; n < 8; n++)
//			//{
//			//	for (int m = 0; m < 8; m++)
//			//		cout << board[n * 8 + m];
//			//	cout << endl;
//			//}
//
//			if (min > count)
//				min = count;
//
//			free(board);
//		}
//	cout << min;
//	free(exam);
//	return 0;
//}
//
//char* copyBoard(int row, int col, int maxRow, int maxCol, char *exam)
//{
//	char *board = (char*)malloc(sizeof(char)*SIZE);
//
//	for (int i = 0; i < 8; i++)
//		for (int j = 0; j < 8; j++)
//		{
//			board[i * 8 + j] = exam[(row + i) * maxCol + (col + j)];
//		}
//
//	return board;
//}
//
//int countRedrawSquare(char *board)
//{
//	int countW = 0;
//	int countB = 0;
//
//	char color;
//
//	color = 'W';
//	for (int i = 0; i < SIZE; i++)
//	{
//
//		if (color != board[i])
//		{
//			countW++;
//			////Debug
//			//cout << "color: " << color << endl;
//			//cout << "board[" << i << "]: " << board[i] << endl;
//		}
//		if (i % 8 == 7)
//			continue;
//		else
//		{
//			if (color == 'W')
//				color = 'B';
//			else
//				color = 'W';
//		}
//	}
//
//	color = 'B';
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (color != board[i])
//			countB++;
//		if (i % 8 == 7)
//			continue;
//		else
//		{
//			if (color == 'W')
//				color = 'B';
//			else
//				color = 'W';
//		}
//	}
//
//	if (countW < countB)
//		return countW;
//	else
//		return countB;
//}