//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//bool visit[11][11][2]; // x, y, line(ud, lr)
//
//
//int main()
//{
//	string dirs = "ULURRDLLU";
//	string dirs2 = "LULLLLLLU";
//	int count = 0;
//	int x = 5, y = 5;
//
//	for (int i = 0; i < dirs.length(); i++)
//	{
//		switch (dirs[i])
//		{
//		case 'U':
//			visit[x][y][0] = true;
//			y++;
//			break;
//		case 'D':
//			visit[x][y-1][0] = true;
//			y--;
//			break;
//		case 'L':
//			visit[x][y][1] = true;
//			x--;
//			break;
//		case 'R':
//			visit[x+1][y][1] = true;
//			x++;
//			break;
//		}
//	}
//
//	for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			for (int k = 0; k < 2; k++)
//				if (visit[i][j][k])
//					count++;
//		}
//	}
//
//	cout << count;
//
//	int answer = 7;
//
//}