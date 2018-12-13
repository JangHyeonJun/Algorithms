//#include <iostream>
//
//using namespace std;
//
//int getNum(int k, int n)
//{
//	if (k == 0)
//		return n;
//	else if (n == 1)
//		return 1;
//	else
//	{
//		return getNum(k, n - 1) + getNum(k - 1, n);
//	}
//}
//
//int main()
//{
//	int T, k, n;
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> k >> n;
//		cout << getNum(k, n) << '\n';
//	}
//
//	return 0;
//}