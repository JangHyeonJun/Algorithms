//#include <vector>
//#include <unordered_set>
//#include <queue>
//using namespace std;
//
//typedef pair<int, int> II;
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//vector<int> solution(int m, int n, vector<vector<int>> picture) {
//	int number_of_area = 0;
//	int max_size_of_one_area = 0;
//
//	vector<vector<bool>> visited(m, vector<bool>(n, false));
//	queue<II> q;
//	unordered_set<int> us;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (picture[i][j] == 0)
//				visited[i][j] = true;
//			if (!visited[i][j])
//			{
//				number_of_area++;
//				int size_of_one_area = 1;
//				visited[i][j] = true;
//				q.push(make_pair(i, j));
//				while (!q.empty())
//				{
//
//					II pos = q.front();
//					q.pop();
//					int row, col;
//
//					// up
//					row = pos.first - 1;
//					col = pos.second;
//					if (row >= 0 && row < m && col >= 0 && col < n
//						&& picture[row][col] != 0 && !visited[row][col]
//						&& picture[row][col] == picture[pos.first][pos.second])
//					{
//						visited[row][col] = true;
//						size_of_one_area++;
//						q.push(make_pair(row, col));
//					}
//					// down
//					row = pos.first + 1;
//					col = pos.second;
//					if (row >= 0 && row < m && col >= 0 && col < n
//						&& picture[row][col] != 0 && !visited[row][col]
//						&& picture[row][col] == picture[pos.first][pos.second])
//					{
//						visited[row][col] = true;
//						size_of_one_area++;
//						q.push(make_pair(row, col));
//					}
//					// left
//					row = pos.first;
//					col = pos.second - 1;
//					if (row >= 0 && row < m && col >= 0 && col < n
//						&& picture[row][col] != 0 && !visited[row][col]
//						&& picture[row][col] == picture[pos.first][pos.second])
//					{
//						visited[row][col] = true;
//						size_of_one_area++;
//						q.push(make_pair(row, col));
//					}
//					// right
//					row = pos.first;
//					col = pos.second + 1;
//					if (row >= 0 && row < m && col >= 0 && col < n
//						&& picture[row][col] != 0 && !visited[row][col]
//						&& picture[row][col] == picture[pos.first][pos.second])
//					{
//						visited[row][col] = true;
//						size_of_one_area++;
//						q.push(make_pair(row, col));
//					}
//
//				}
//				if (size_of_one_area > max_size_of_one_area)
//					max_size_of_one_area = size_of_one_area;
//			}
//		}
//	}
//
//
//	vector<int> answer(2);
//	answer[0] = number_of_area;
//	answer[1] = max_size_of_one_area;
//	return answer;
//}