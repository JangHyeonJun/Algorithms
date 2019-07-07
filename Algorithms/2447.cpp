//#include<iostream>
//
//using namespace std;
//
//void makeReculsiveStar(int n, char **star, int row = 0, int col = 0)
//{
//	if (n >= 9)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				if (!(i == 1 && j == 1))
//					makeReculsiveStar(n / 3, star, row + i * (n / 3), col + j * (n / 3));
//			}
//		}
//	}
//	else
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				if (!(i == 1 && j == 1))
//					star[row + i][col + j] = '*';
//			}
//		}
//	}
//}
//
//void init2DStarArray(int n, char **star)
//{
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			star[i][j] = ' ';
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	char **star = new char*[n];
//	for (int i = 0; i < n; i++)
//		star[i] = new char[n];
//
//	init2DStarArray(n, star);
//	makeReculsiveStar(n, star);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << star[i][j];
//		}
//		if(i != n-1)
//			cout << '\n';
//	}
//
//	for (int i = 0; i < n; i++)
//		delete star[i];
//	delete star;
//
//	return 0;
//}