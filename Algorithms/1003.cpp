//#include <iostream>
//
//using namespace std;
//
//int flag[41];
//
//int fibonacci(int n) {
//	if (flag[n] != -1)
//		return flag[n];
//
//	if (n == 0) {
//		flag[n] = 0;
//		return 0;
//	}
//	else if (n == 1) {
//		flag[n] = 1;
//		return 1;
//	}
//	else {
//		flag[n] = fibonacci(n - 1) + fibonacci(n - 2);
//		return flag[n];
//	}
//}
//
//int main()
//{
//	int T,N;
//	cin >> T;
//	for (int i = 0; i < 41; i++)
//	{
//		flag[i] = -1;
//	}
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> N;
//		if (N == 0)
//			cout << 1 << ' ' << 0 << '\n';
//		else
//			cout << fibonacci(N - 1) << ' ' << fibonacci(N) << '\n';
//	}
//}