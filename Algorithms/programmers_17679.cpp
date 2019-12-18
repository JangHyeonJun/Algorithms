//#include <string>
//#include <vector>
//
//using namespace std;
//
//typedef pair<int, int> II;
//
//void move_block(int m, int n, vector<string>& board)
//{
//	for (int i=0; i<n; i++)
//	{
//		int row = m - 1;
//		while (row >= 0)
//		{
//			if (board[row][i] == '_')
//			{
//				for (int j = row - 1; j >= 0; j--)
//					board[j + 1][i] = board[j][i];
//				board[0][i] = '*';
//			}
//			else
//				row--;
//		}
//	}
//}
//
//int destroy_block(const vector<II>& pos, vector<string>& board)
//{
//	int destroy_count = 0;
//	for (int i = 0; i < pos.size(); i++)
//	{
//		int row = pos[i].first;
//		int col = pos[i].second;
//
//		for(int j=0; j<2; j++)
//			for (int k = 0; k < 2; k++)
//				if (board[row - j][col + k] != '_')
//				{
//					board[row - j][col + k] = '_';
//					destroy_count++;
//				}
//	}
//
//	return destroy_count;
//}
//
//vector<II> find_4by4_Block(int m, int n, vector<string>& board)
//{
//	vector<II> pos;
//	for (int i = m - 1; i > 0; i--)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			char c = board[i][j];
//			if (c != '*' && board[i][j + 1] == c
//				&& board[i - 1][j] == c && board[i - 1][j + 1] == c)
//			{
//				pos.push_back(make_pair(i, j));
//			}
//		}
//	}
//	return pos;
//}
//
//int solution(int m, int n, vector<string> board) {
//	int answer = 0;
//	int curr_destroy_num = 0;
//	do
//	{
//		vector<II> pos = find_4by4_Block(m, n, board);
//		answer += curr_destroy_num = destroy_block(pos, board);
//		move_block(m, n, board);
//	} while (curr_destroy_num > 0);
//	return answer;
//}
//
//int main()
//{
//	vector<string> board = { "CCBDE", "AAADE", "AAABF", "CCBBF" };
//	vector<string> board2 = { "TTTANT", "RRFACC", "RRRFCC",
//	"TRRAA", "TTMMMF", "TMMTTJ" };
//	solution(6, 6, board2);
//}