//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<bool>> used_row(9, vector<bool>(10, false));
//vector<vector<bool>> used_col(9, vector<bool>(10, false));
//vector<vector<bool>> used_3by3(9, vector<bool>(10, false));
//
//void printSudoku(const vector<vector<int>>& sudoku)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//			cout << sudoku[i][j] << ' ';
//		cout << '\n';
//	}			
//}
//
//bool canFill(int row, int col, const int& n)
//{
//	if (used_row[row][n] || used_col[col][n] || used_3by3[row / 3 * 3 + col / 3][n])
//		return false;
//	return true;
//}
//
//void dfs(vector<vector<int>>& sudoku, int count)
//{
//	//cout << '\n' << "count : " << count << '\n';
//	//printSudoku(sudoku);
// 	if (count == 81)
//	{
//		printSudoku(sudoku);
//		exit(0);
//	}
//	for(int i=0; i<9; i++)
//		for (int j = 0; j < 9; j++)
//		{
//			if (sudoku[i][j] == 0)
//			{
//				for (int k = 1; k < 10; k++)
//				{
//					if (canFill(i, j, k))
//					{
//						sudoku[i][j] = k;
//						used_row[i][k] = true;
//						used_col[j][k] = true;
//						used_3by3[i / 3 * 3 + j / 3][k] = true;
//						dfs(sudoku, count + 1);
//						sudoku[i][j] = 0;
//						used_row[i][k] = false;
//						used_col[j][k] = false;
//						used_3by3[i / 3 * 3 + j / 3][k] = false;
//					}
//				}
//				return;
//			}
//		}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int count = 0;
//	vector<vector<int>> sudoku(9, vector<int>(9,0));
//	for (int i = 0; i < 9; i++)
//		for (int j = 0; j < 9; j++)
//		{
//			cin >> sudoku[i][j];
//			int input = sudoku[i][j];
//			used_row[i][input] = true;
//			used_col[j][input] = true;
//			used_3by3[i / 3 * 3 + j / 3][input] = true;
//			if (input != 0)
//				count++;
//		}
//
//	dfs(sudoku, count);
//
//	return 0;
//}