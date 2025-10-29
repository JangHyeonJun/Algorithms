//#include <vector>
//using namespace std;
//
//enum STATE
//{
//	DEAD = 0,
//	LIVE = 1,
//	WILL_DEAD = 2,
//	WILL_LIVE = 3,
//};
//
//class Solution {
//	int CountNeighbors(vector<vector<int>>& board, int row, int col)
//	{
//		int count = 0;
//		auto rowLen = board.size();
//		auto colLen = board[0].size();
//
//		for (int i = row - 1; i <= row + 1; i++)
//			for (int j = col - 1; j <= col + 1; j++)
//				if (i == row && j == col)
//					continue;
//				else if (i < 0 || i >= rowLen || j < 0 || j >= colLen)
//					continue;
//				else if (board[i][j] == LIVE || board[i][j] == WILL_DEAD)
//					count++;
//
//		return count;
//	}
//public:
//	void gameOfLife(vector<vector<int>>& board) {
//		auto rowLen = board.size();
//		auto colLen = board[0].size();
//		for (int i = 0; i < rowLen; i++)
//			for (int j = 0; j < colLen; j++)
//			{
//				auto neighbors = CountNeighbors(board, i, j);
//				if (board[i][j] == LIVE && (neighbors != 2 && neighbors != 3))
//					board[i][j] = WILL_DEAD;
//				else if (board[i][j] == DEAD && neighbors == 3)
//					board[i][j] = WILL_LIVE;
//			}
//		for (int i = 0; i < rowLen; i++)
//			for (int j = 0; j < colLen; j++)
//				if (board[i][j] == WILL_LIVE)
//					board[i][j] = LIVE;
//				else if (board[i][j] == WILL_DEAD)
//					board[i][j] = DEAD;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<vector<int>> v{ {0,1} };
//	s.gameOfLife(v);
//	return 0;
//}