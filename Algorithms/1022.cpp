//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void printSquare(int max, int* input)
//{
//	int max_row = abs(input[2] - input[0]) + 1;
//	int max_col = abs(input[3] - input[1]) + 1;
//
//	vector<vector<int>> v(max_row, vector<int>(max_col, 1));
//
//	const int row_array[4] = { 0, -1, 0, 1 };
//	const int col_array[4] = { 1, 0, -1, 0 };
//
//	int len, n, order, row, col, max_n, max_len, max_output;
//	len = n = max_n = 1;
//	row = col = 0;
//	order = max_output = 0;
//
//	for (int i = 0; i < max; i++)
//		max_n += (i + 1) * 8;
//	
//
//	while (n < max_n)
//	{
//		int cnt = len;
//		for (int i = 0; i < cnt; i++)
//		{
//			if (n >= max_n)
//				break;
//			n++;
//			row += row_array[order];
//			col += col_array[order];
//
//			if (row >= input[0] && row <= input[2] &&
//				col >= input[1] && col <= input[3])
//			{
//				v[row - input[0]][col - input[1]] = n;
//				if (n > max_output)
//					max_output = n;
//			}
//		}
//		order = (order + 1) % 4;
//		for (int i = 0; i < cnt; i++)
//		{
//			if (n >= max_n)
//				break;
//			n++;
//			row += row_array[order];
//			col += col_array[order];
//			
//			if (row >= input[0] && row <= input[2] &&
//				col >= input[1] && col <= input[3])
//			{
//				v[row - input[0]][col - input[1]] = n;
//				if (n > max_output)
//					max_output = n;
//			}
//		}
//		order = (order + 1) % 4;
//		len++;
//	}
//
//	max_len = to_string(max_output).length();
//
//	for (int i = 0; i < max_row; i++)
//	{
//		for (int j = 0; j < max_col; j++)
//		{
//			cout.width(max_len);
//			cout << v[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	int input[4];
//	int max = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int n;
//		cin >> n;
//		input[i] = n;
//		if (abs(n) > max)
//			max = abs(n);
//	}
//	printSquare(max, input);
//
//	return 0;
//}