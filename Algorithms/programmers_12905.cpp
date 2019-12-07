//#include <iostream>
//#include<vector>
//using namespace std;
//
//int getArea(vector<vector<int>>& board)
//{
//	int max = 0;
//	vector<vector<int>> v(board.size() + 1, vector<int>(board[0].size() + 1, 0));
//	
//	for (int i = 0; i < board.size(); i++)
//		for (int j = 0; j < board[i].size(); j++)
//			v[i + 1][j + 1] = board[i][j];
//
//	for (int i = 1; i < v.size(); i++)
//		for (int j = 1; j < v[i].size(); j++)
//		{
//			if (v[i][j] != 0)
//			{
//				int min = 987654321;
//
//				if (v[i - 1][j] < min)
//					min = v[i - 1][j];
//				if (v[i][j - 1] < min)
//					min = v[i][j - 1];
//				if (v[i - 1][j - 1] < min)
//					min = v[i - 1][j - 1];
//
//				v[i][j] = min + 1;
//				if (v[i][j] > max)
//					max = v[i][j];
//			}
//		}
//
//	return max * max;
//}
//
//int solution(vector<vector<int>> board)
//{
//	return getArea(board);
//}
//
//int main()
//{
//	vector<vector<int>> v = { {0,1,1,1}, {1,1,1,1}, {1,1,1,1}, {0,0,1,0} };
//	vector<vector<int>> v2 = { {0,0,0,0}, {0,0,0,0}, {1,1,1,1}, {0,0,0,0} };
//	vector<vector<int>> v3 = { {1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1} };
//	vector<vector<int>> v4 = { {1,1,0,0}, {0,0,1,1}, {1,1,0,0}, {0,0,1,1} };
//	solution(v);
//}