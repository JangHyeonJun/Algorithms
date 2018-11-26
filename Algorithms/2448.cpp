//#include <iostream>
//#include <string>
//using namespace std;
//
//bool arrStar[3073][6145] = { false, };
//
//void makeTreeArray(int line)
//{
//	int treeNum = 1;
//	for (int i = 1; i < (line / 3); i++)
//		treeNum *= 3;
//
//	for (int i = 0; i < treeNum; i++)
//	{
//		arrStar[0][2 + 3 * i] = true;
//
//		arrStar[1][1 + 3 * i] = true;
//		arrStar[1][3 + 3 * i] = true;
//
//		arrStar[2][0 + 3 * i] = true;
//		arrStar[2][1 + 3 * i] = true;
//		arrStar[2][2 + 3 * i] = true;
//		arrStar[2][3 + 3 * i] = true;
//		arrStar[2][4 + 3 * i] = true;
//	}
//}
//int main()
//{
//	int N;
//	cin >> N;
//	makeTreeArray(N);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N * 2; j++)
//		{
//			if (arrStar[i][j])
//				cout << '*';
//			else
//				cout << ' ';
//		}
//		cout << '\n';
//	}
//}