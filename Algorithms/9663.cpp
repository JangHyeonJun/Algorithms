//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//const int maxN = 15 + 2;
//
//int n, chess_case;
//bool col[maxN];
//bool inc_diagonal[maxN * 2];
//bool dec_diagonal[maxN * 2];
//
//void findChess(int count = 1)
//{
//	if (count > n)
//	{
//		chess_case++;
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!col[i] && !inc_diagonal[n + count + i] && !dec_diagonal[n - count + i])
//		{
//			col[i] = inc_diagonal[n + count + i] = dec_diagonal[n - count + i] = true;
//			findChess(count + 1);
//			col[i] = inc_diagonal[n + count + i] = dec_diagonal[n - count + i] = false;
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	findChess();
//	cout << chess_case;
//	return 0;
//}