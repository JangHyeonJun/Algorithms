//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<vector<bool>> findLockMat(const vector<vector<int>>& lock)
//{
//	int max_row, max_col, min_row, min_col;
//	max_row = max_col = -1;
//	min_row = min_col = lock.size();
//
//	for (int i = 0; i < lock.size(); i++)
//		for (int j = 0; j < lock.size(); j++)
//			if (lock[i][j] == 0)
//			{
//				if (i > max_row)
//					max_row = i;
//				if (i < min_row)
//					min_row = i;
//				if (j > max_col)
//					max_col = j;
//				if (j < min_col)
//					min_col = j;
//			}
//
//	int max_diff = max_row - min_row > max_col - min_col ?
//		max_row - min_row + 1 : max_col - min_col + 1;
//	if (max_row - min_row > max_col - min_col)
//	{
//		max_diff = max_row - min_row;
//		if (max_col - max_diff >= 0)
//			min_col = max_col - max_diff;
//	}
//	else
//	{
//		max_diff = max_col - min_col;
//		if (max_row - max_diff >= 0)
//			min_row = max_row - max_diff;
//	}
//	max_diff++;
//
//	vector<vector<bool>> mat(max_diff, vector<bool>(max_diff, false));
//
//	for (int i = 0; i < max_diff; i++)
//		for (int j = 0; j < max_diff; j++)
//			if (lock[min_row + i][min_col + j] == 1)
//				mat[i][j] = true;
//
//	return mat;
//}
//
//vector<vector<vector<bool>>> getRotatedMat(const vector<vector<bool>>& mat)
//{
//	int size = mat.size();
//	vector<vector<vector<bool>>> rotated(4,
//		vector<vector<bool>>(size, vector<bool>(size, false)));
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (mat[i][j] == 1)
//			{
//				rotated[0][i][j] = true;
//				rotated[1][j][size - 1 - i] = true;
//				rotated[2][size - 1 - i][size - 1 - j] = true;
//				rotated[3][size - 1 - j][i] = true;
//			}
//		}
//	}
//
//	return rotated;
//}
//
//void printRotatedMat(const vector<vector<vector<bool>>>& mat)
//{
//	for (int i = 0; i < mat.size(); i++)
//	{
//		for (int j = 0; j < mat[0].size(); j++)
//		{
//			for (int k = 0; k < mat[0].size(); k++)
//			{
//				if (mat[i][j][k])
//					cout << '1';
//				else
//					cout << '0';
//			}
//			cout << '\n';
//		}
//
//		cout << "\n-------------\n";
//	}
//}
//
//bool canUnlock(const vector<vector<int>>& key, const vector<vector<vector<bool>>> mat)
//{
//	int count = key.size() - mat[0].size() + 1;
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count; j++)
//		{
//			bool is_same = true;
//			for (int k = 0; k < 4; k++)
//			{
//				is_same = true;
//				for (int m = 0; m < mat[0].size(); m++)
//				{
//					if (!is_same)
//						break;
//					for (int n = 0; n < mat[0].size(); n++)
//					{
//						if (!is_same)
//							break;
//						if (key[i + m][j + n] != 1 && mat[k][m][n])
//							is_same = false;
//						else if (key[i + m][j + n] != 0 && !mat[k][m][n])
//							is_same = false;
//					}
//				}
//				if (is_same)
//					return true;
//			}
//		}
//	}
//	return false;
//}
//
//bool solution(vector<vector<int>> key, vector<vector<int>> lock)
//{
//	return canUnlock(key, getRotatedMat(findLockMat(lock)));;
//}
//
//int main()
//{
//	vector<vector<int>> key = { {0,0,0}, {0,0,0}, {0,1,1} };
//	vector<vector<int>> lock = { {0,0,1},{0,0,1},{0,0,0} };
//	cout << solution(key, lock);
//}