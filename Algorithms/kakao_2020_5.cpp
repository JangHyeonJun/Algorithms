//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//// 0 기둥, 1 보
//bool wall[101][101][2];
//
//void build(vector<int> build, int n)
//{
//	int x = build[0], y = build[1],
//		a = build[2], b = build[3];
//	// 설치할 경우
//	if (b == 1)
//	{
//		//기둥일 경우
//		if (a == 0)
//		{
//			//바닥 위에 있는 경우
//			if (y < 1)
//			{
//				wall[x][y][0] = true;
//			}
//			else
//			{
//				//한쪽 끝에 보가 있는 경우
//				if (wall[x - 1][y][1] || wall[x][y][1])
//					wall[x][y][0] = true;
//				//아래 기둥이 있는 경우
//				else if (wall[x][y - 1][0])
//					wall[x][y][0] = true;
//			}
//		}
//		// 보일 경우
//		else if (a == 1)
//		{
//			if (wall[x][y - 1][0] || wall[x + 1][y - 1][0])
//				wall[x][y][1] = true;
//			// 양쪽 끝에 보가 있는 경우
//			else if (wall[x - 1][y][1] && wall[x + 1][y][1])
//				wall[x][y][1] = true;
//		}
//	}
//	// 삭제할 경우
//	else if (b == 0)
//	{
//		// 기둥일 경우
//		if (a == 0)
//		{
//			// 위에 있는 기둥이 안될 경우
//			if (wall[x][y + 1][0] && !(wall[x - 1][y + 1][1]
//				|| wall[x][y + 1][1]))
//				return;
//			// 위에 있는 보가 안될 경우
//			else if (wall[x][y + 1][1] && !(wall[x + 1][y + 1][0] ||
//				(wall[x - 1][y + 1][1] && wall[x + 1][y + 1][1])))
//				return;
//			// 위-왼쪽에 있는 보가 안될 경우
//			else if (wall[x - 1][y + 1][1] && !(wall[x - 1][y][0] ||
//				(x > 1 && wall[x - 2][y + 1][1] && wall[x][y + 1][1])))
//				return;
//
//			wall[x][y][0] = false;
//		}
//		// 보일 경우
//		else if (a == 1)
//		{
//			// 자리에있는 기둥이 괜찮을 경우
//			if (wall[x][y][0] &&
//				!(wall[x][y - 1][0] || wall[x - 1][y][1]))
//				return;
//			// 왼쪽에 있는 보가 괜찮을 경우
//			else if (wall[x - 1][y][1] &&
//				!(wall[x][y - 1][0] || wall[x - 1][y - 1][0]))
//				return;
//			// 오른쪽에 있는 기둥이 괜찮을 경우
//			else if (wall[x + 1][y][0] &&
//				!(wall[x + 1][y][1] || wall[x + 1][y - 1][0]))
//				return;
//			// 오른쪽에 있는 보가 괜찮을 경우
//			else if (wall[x + 1][y][1] &&
//				!(wall[x + 1][y - 1][0] || (x < n - 1 && wall[x + 2][y - 1][0])))
//				return;
//			wall[x][y][1] = false;
//		}
//	}
//}
//
//vector<vector<int>> result(int n)
//{
//	vector<vector<int>> v;
//	for (int i = 0; i <= n; i++)
//		for (int j = 0; j <= n; j++)
//		{
//			if (wall[i][j][0])
//				v.push_back({ i, j, 0 });
//			if (wall[i][j][1])
//				v.push_back({ i, j, 1 });
//		}
//	return v;
//}
//
//vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
//	vector<vector<int>> answer;
//	for (int i = 0; i < build_frame.size(); i++)
//		build(build_frame[i], n);
//	answer = result(n);
//	return answer;
//}
//
//int main()
//{
//	vector<vector<int>> v{ {1,0,0,1},{1,1,1,1},{2,1,0,1},{2,2,1,1},
//	{5,0,0,1}, {5,1,0,1}, {4,2,1,1}, {3,2,1,1} };
//
//	vector<vector<int>> s = solution(5, v);
//                                                 	return 0;
//}