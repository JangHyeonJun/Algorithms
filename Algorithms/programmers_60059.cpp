//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//
//bool canUnlock(const vector<vector<int>>& lock)
//{
//	for (int i = 0; i < lock.size(); i++)
//		for (int j = 0; j < lock.size(); j++)
//			if (lock[i][j] == 0)
//				return false;
//	return true;
//}
//vector<vector<vector<bool>>> getRotatedKey(const vector<vector<int>>& key)
//{
//	int size = key.size();
//	vector<vector<vector<bool>>> rotated(4,
//		vector<vector<bool>>(size, vector<bool>(size, false)));
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (key[i][j] == 1)
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
//void printdMat(const vector<vector<int>>& mat)
//{
//	for (int i = 0; i < mat.size(); i++)
//	{
//		for (int j = 0; j < mat[0].size(); j++)
//		{
//			cout << mat[i][j];
//		}
//		cout << "\n";
//	}
//	cout << "\n\n\n";
//}
//
//bool moveKey(const vector<vector<bool>>& key, const vector<vector<int>>& lock)
//{
//	const int size = lock.size() * 3;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			vector<vector<int>> mat(size, vector<int>(size, 0));
//			bool unlock = true;
//
//			for (int m = 0; m < lock.size(); m++)
//				for (int n = 0; n < lock.size(); n++)
//					mat[lock.size() + m][lock.size() + n] = lock[m][n];
//
//			for (int m = 0; m < key.size(); m++)
//				for (int n = 0; n < key.size(); n++)
//				{
//					if (i + m < size && j + n < size && mat[i + m][j + n] == 0 && key[m][n] == 1)
//						mat[i + m][j + n] = 1;
//					else if (i + m < size && j + n < size && mat[i + m][j + n] == 1 && key[m][n] == 1)
//						mat[i + m][j + n] = 0;
//				}
//
//			for (int m = 0; m < lock.size(); m++)
//				for (int n = 0; n < lock.size(); n++)
//					if (mat[lock.size() + m][lock.size() + n] == 0)
//						unlock = false;
//
//			//printdMat(mat);
//			if (unlock)
//				return true;
//		}
//	}
//	vector<vector<int>> mat(size, vector<int>(size, 0));
//	return false;
//}
//
//
//bool solution(vector<vector<int>> key, vector<vector<int>> lock)
//{
//	vector<vector<vector<bool>>> rotated_key = getRotatedKey(key);
//	for (int i = 0; i < rotated_key.size(); i++)
//		if (moveKey(rotated_key[i], lock))
//			return true;
//
//	return false;
//}
//
//int main()
//{
//	vector<vector<int>> key = { {1,0,1}, {0,1,1}, {0,1,0} };
//	vector<vector<int>> lock = { {1,1,0}, {1,0,0}, {1,0,1} };
//
//	vector<vector<int>> key2 = { {0,0,0}, {1,0,0}, {0,1,1} };
//	vector<vector<int>> lock2 = { {1,1,1}, {1,1,0}, {1,0,1} };
//
//	vector<vector<int>> key3 = { {0,1},{0,1} };
//	vector<vector<int>> lock3 = { {1,0,1},{0,1,1},{1,1,1} };
//
//	vector<vector<int>> key4 = { {0,0,0}, {1,0,0}, {0,1,1} };
//	vector<vector<int>> lock4 = { {1,1,1}, {1,1,0}, {1,0,1} };
//
//	vector<vector<int>> lock_t = { {1,1,1},{1,1,1},{1,1,1} };
//
//	vector<vector<int>> key5 = { {0,0,0}, {0,0,0}, {0,0,1} };
//	vector<vector<int>> lock5 = { {1,1,1,1},{1,1,0,1},{1,1,1,1},{1,1,1,1} };
//
//	vector<vector<int>> key6 = { {0,1,0}, {1,1,0}, {0,0,0} };
//	vector<vector<int>> lock6 = { {1,1,1}, {1,0,0}, {1,0,1} };
//
//	vector<vector<int>> key7 = { {0,0,0,0}, {1,1,0,0}, {1,1,0,0}, {0,0,0,0} };
//	vector<vector<int>> lock7 = { {1,1,1,1,1}, {1,1,1,0,0}, {1,1,1,0,0}, {1,1,1,1,1}, {1,1,1,1,1} };
//
//	//cout << solution(key, lock) << endl;
//	//cout << solution(key2, lock2) << endl;
//	//cout << solution(key3, lock3) << endl;
//	//cout << solution(key4, lock4) << endl;
//	//cout << solution(key4, lock_t) << endl;
//	//cout << solution(key5, lock5) << endl;
//	cout << solution(key6, lock6) << endl;
//	//cout << solution(key7, lock7) << endl;
//}