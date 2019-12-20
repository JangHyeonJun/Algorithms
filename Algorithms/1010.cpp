//#include <iostream>
//
//using namespace std;
//
//long long factorial(long long n)
//{
//	if (n == 0)
//		return 1;
//	int num = 1;
//	for (int i = 2; i <= n; i++)
//		num *= i;
//	return num;
//}
//
//unsigned long long set(int n, int m)
//{
//	unsigned long long num = 1;
//	unsigned long long num2 = 1;
//	if (m - n > n)
//		n = m - n;
//	
//	for (int i = 2; i <= m; i++)
//	{
//		int divide = i % n == 0 ? n : i % n;
//		num *= i;
//		num /= divide;
//	}
//
//
//	return num;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n, m;
//		cin >> n >> m;
//		cout << set(n, m) << '\n';
//	}
//
//	return 0;
//}