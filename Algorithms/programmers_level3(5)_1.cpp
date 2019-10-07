//#include <string>
//using namespace std;
//
//const int center = 5;
//bool visit[11][11][2]; // D R
//
//
//int countLength()
//{
//	int len = 0;
//	for (int i = 0; i < 11; i++)
//		for (int j = 0; j < 11; j++)
//			for (int k = 0; k < 2; k++)
//				if (visit[i][j][k])
//					len++;
//	return len;
//}
//
//bool canWalk(int x, int y)
//{
//	if (x >= 0 && x <= center + 5)
//		if (y >= 0 && y <= center + 5)
//			return true;
//	return false;
//}
//
//void command(string dirs)
//{
//	int x, y;
//	x = y = center;
//
//	for (int i = 0; i < dirs.length(); i++)
//	{
//		if (dirs[i] == 'U' && canWalk(x, y + 1))
//		{
//			visit[x][y+1][0] = true;
//			y++;
//		}
//		else if(dirs[i] == 'D' && canWalk(x, y - 1))
//		{ 
//			visit[x][y][0] = true;
//			y--;
//		}
//		else if(dirs[i] == 'R' && canWalk(x + 1, y))
//		{ 
//			visit[x][y][1] = true;
//			x++;
//		}
//		else if (dirs[i] == 'L' && canWalk(x - 1, y))
//		{
//			visit[x-1][y][1] = true;
//			x--;
//		}
//	}
//}
//
//int solution(string dirs)
//{
//	int answer = 7;
//	command(dirs);
//	answer = countLength();
//	return answer;
//}