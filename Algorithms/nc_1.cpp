//#include <vector>
//#include<iostream>
//using namespace std;
//
//void printGraph(vector<vector<int>> answer)
//{
//	for (int i = 0; i < answer.size(); i++)
//	{
//		for (int j = 0; j < answer[i].size(); j++)
//			cout << answer[i][j];
//		cout << '\n';
//	}
//}
//
//vector<vector<int>> solution(int N, vector<vector<int>> mine)
//{
//	vector<vector<int>> answer;
//	answer.assign(N, vector<int>(N, 0));
//
//	for (int i = 0; i < mine.size(); i++)
//	{
//		int row = mine[i][0] - 1;
//		int col = mine[i][1] - 1;
//
//		answer[row][col] = -1;
//
//		for (int j = -1; j <= 1; j++)
//		{
//			for (int k = -1; k <= 1; k++)
//			{
//				if (row + j >= 0 && row + j < N
//					&& col + k >= 0 && col + k < N
//					&& answer[row + j][col + k] != -1)
//				{
//					answer[row + j][col + k]++;
//				}
//			}
//		}
//		printGraph(answer);
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<vector<int>> v = { {1,1}, {1,7}, {2,7}, {3,6}, {4,1}, {4,4}, {4,8},
//	{8,4}, {8,5}, {9,6} };
//	solution(9, v);
//}