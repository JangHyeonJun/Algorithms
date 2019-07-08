//#include<iostream>
//
//using namespace std;
//
//void reculsiveHanoi(int n, int from = 1, int by = 2, int to = 3)
//{
//	if (n == 1)
//	{
//		cout << '\n' << from << ' ' << to;
//	}
//	else
//	{
//		reculsiveHanoi(n - 1, from, to, by);
//		cout << '\n' << from << ' ' << to;
//		reculsiveHanoi(n - 1, by, from, to);
//	}
//}
//
//
//int main()
//{
//	int n, count = 1;
//	
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		count *= 2;
//
//	cout << count-1;
//
//	reculsiveHanoi(n);
//
//	return 0;
//}