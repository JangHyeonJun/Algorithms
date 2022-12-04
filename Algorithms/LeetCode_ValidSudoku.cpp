//#include <vector>
//#include <bitset>
//using namespace std;
//
//class Solution {
//
//
//public:
//    bool isValidSudoku(vector<vector<char>>& board) {
//        bitset<9> rowFlag[9], colFlag[9], boxFlag[9];
//
//		for (int i = 0; i < board.size(); i++)
//			for (int j = 0; j < board[i].size(); j++)
//			{
//				if (board[i][j] == '.')
//					continue;
//
//				int box = (i / 3) * 3 + j / 3;
//				int n = board[i][j] - 48;
//
//				if (rowFlag[i][n - 1] || colFlag[j][n - 1] || boxFlag[box][n-1])
//					return false;
//
//				rowFlag[i][n - 1] = colFlag[j][n - 1] = boxFlag[box][n - 1] = true;
//			}
//
//		return true;
//    }
//};