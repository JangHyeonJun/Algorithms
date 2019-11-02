//#include <string>
//#include <vector>
//
//using namespace std;
//string r;
//bool can_go(vector<string>& board, char c)
//{
//	int row_a = -1, col_a = -1;
//	int row_b, col_b;
//	for (int i = 0; i < board.size(); i++)
//	{
//		for (int j = 0; j < board[i].length(); j++)
//		{
//			if (board[i][j] == c)
//			{
//				if (row_a == -1)
//				{
//					row_a = i;
//					col_a = j;
//				}
//				else
//				{
//					row_b = i;
//					col_b = j;
//				}
//			}
//		}
//	}
//
//	int temp_row = row_a;
//	int temp_col = col_a;
//	bool col_start = true;
//	
//	while (col_start && temp_col != col_b)
//	{
//		if (temp_col < col_b)
//			temp_col++;
//		else
//			temp_col--;
//
//		if (board[temp_row][temp_col] ==
//			board[row_b][col_b])
//			break;
//
//		if (board[temp_row][temp_col] != '.')
//			col_start = false;
//	}
//	while (col_start && temp_row != row_b)
//	{
//		if (temp_row < row_b)
//			temp_row++;
//		else
//			temp_row--;
//
//		if (board[temp_row][temp_col] ==
//			board[row_b][col_b])
//			break;
//
//		if (board[temp_row][temp_col] != '.')
//			col_start = false;
//	}
//	if (!col_start)
//	{
//		int temp_row = row_a;
//		int temp_col = col_a;
//		while (temp_row != row_b)
//		{
//			if (temp_row < row_b)
//				temp_row++;
//			else
//				temp_row--;
//
//			if (board[temp_row][temp_col] ==
//				board[row_b][col_b])
//				break;
//
//			if (board[temp_row][temp_col] != '.')
//				return false;
//		}
//		while (temp_col != col_b)
//		{
//			if (temp_col < col_b)
//				temp_col++;
//			else
//				temp_col--;
//
//			if (board[temp_row][temp_col] ==
//				board[row_b][col_b])
//				break;
//
//			if (board[temp_row][temp_col] != '.')
//				return false;
//		}
//	}
//
//	board[row_a][col_a] = '.';
//	board[row_b][col_b] = '.';
//
//	return true;
//}
//
//vector<bool> find_chars(vector<string> board)
//{
//	vector<bool> chars(26, false);
//	for (int i = 0; i < board.size(); i++)
//	{
//		for (int j = 0; j < board[i].length(); j++)
//		{
//			int ascii = board[i][j];
//			if (ascii >= 65 && ascii <= 90)
//				chars[ascii - 65] = true;
//		}
//	}
//	return chars;
//}
//
//void find( vector<string> board, string result, vector<bool> chars)
//{
//	bool check_all = true;
//	for (int i = 0; i < chars.size(); i++)
//	{
//		if (chars[i])
//		{
//			char c = i + 65;
//			if (can_go(board, c))
//			{
//				check_all = false;
//				result += c;
//				chars[i] = false;
//				find(board, result, chars);
//			}
//		}
//	}
//	if(check_all)
//		r = result;
//}
//
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//string solution(int m, int n, vector<string> board) {
//	string answer = "";
//	vector<bool> chars = find_chars(board);
//	r = "";
//	find(board, "", chars);
//	if (r == "")
//		answer = "IMPOSSIBLE";
//	else
//		answer = r;
//
//	return answer;
//}
//
//int main()
//{
//	vector<string> board = { "****", "BB**" };
//	solution(2, 4, board);
//}