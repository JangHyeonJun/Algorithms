//#include<iostream>
//
//using namespace std;
//
//int checkRank(int index, int size, int *x, int *y)
//{
//	int rank = 1;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (i == index)
//			continue;
//
//		if (x[index] < x[i] && y[index] < y[i])
//			rank++;
//	}
//
//	return rank;
//
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	int *x = new int[N];
//	int *y = new int[N];
//	
//	for (int i = 0; i < N; i++)
//		cin >> x[i] >> y[i];
//
//	for (int i = 0; i < N; i++)
//		cout << checkRank(i, N, x, y) << ' ';
//
//	delete[] x;
//	delete[] y;
//	return 0;
//}