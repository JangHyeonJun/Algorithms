//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int score[8];
//	int min_index[3] = { -1,-1,-1 };
//	int min = 200;
//	for (int i = 0; i < 8; i++)
//		cin >> score[i];
//	for (int i = 0; i < 8; i++)
//		if (score[i] < min)
//		{
//			min_index[0] = i;
//		}
//	min = 200;
//	for (int i = 0; i < 8; i++)
//		if (score[i] < min && i != min_index[0])
//		{
//			min_index[1] = i;
//		}
//	min = 200;
//	for (int i = 0; i < 8; i++)
//		if (score[i] < min && i != min_index[0] && i != min_index[1])
//		{
//			min_index[2] = i;
//		}
//
//	for (int i = 1; i <= 8; i++)
//	{
//		bool flag = false;
//		for (int j = 0; j < 3; j++)
//			if (i == min_index[j] + 1)
//				flag = true;
//
//		if (!flag)
//			cout << i << ' ';
//	}
//
//
//	return 0;
//}