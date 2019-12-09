//#include<vector>
//using namespace std;
//
//int max_num = -987654321;
//
//void dfs(const vector<vector<int>>& board, vector<bool>& col, int row = 0, int num = 0)
//{
//	if (row > board.size())
//		return;
//	if (num > max_num)
//		max_num = num;
//
//	for (int i = 0; i < board.size(); i++)
//	{
//		if (!col[i])
//		{
//			col[i] = true;
//			dfs(board, col, row + 1, num + board[row][i]);
//			col[i] = false;
//		}
//	}
//}
//
//int solution(vector<vector<int>> board)
//{
//	int answer = 0;
//	vector<bool> col(board.size(), false);
//
//	dfs(board, col);
//
//	answer = max_num;
//	return answer;
//}
//
//int main()
//{
//	vector<vector<int>> v = { {3, 6, 8}, {1,4,7}, {2,1,4} };
//	vector<vector<int>> v2 = { {12, 15}, {19,21} };
//	solution(v2);
//}