//#include <iostream>
//
//using namespace std;
//
//bool is_prime_number(int num)
//{
//	if (num < 2)
//		return false;
//	for (int i = 2; i < num; i++)
//		if (num%i == 0)
//			return false;
//	return true;
//}
//
//int main()
//{
//	int sum = 0;
//	int min = 10000;
//	int M, N;
//
//	cin >> M >> N;
//	for (int i = M; i <= N; i++)
//	{
//		if (is_prime_number(i))
//		{
//			sum += i;
//			if (i < min)
//				min = i;
//		}
//	}
//	if (sum != 0)
//		cout << sum << '\n' << min << '\n';
//	else
//		cout << -1 << '\n';
//	
//
//	return 0;
//}