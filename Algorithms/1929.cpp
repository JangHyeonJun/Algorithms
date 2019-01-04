//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//bool is_prime_number(int num)
//{
//	if (num < 2)
//		return false;
//	for (int i = 2; i*i <= num; i++)
//		if (num%i == 0)
//			return false;
//	return true;
//}
//
//int main()
//{
//	int M, N;
//	bool flag[1000001] = { true, };
//	memset(flag, true, sizeof(flag));
//	cin >> M >> N;
//
//	// 에라토스테네스의 체를 사용하여 소수 찾기 풀이
//	for (int i = 1; i <= N; i++)
//		if (flag[i])
//			if (is_prime_number(i))
//				for (int j = 2; j <= (N / i); j++)
//					flag[i*j] = false;
//			else
//				flag[i] = false;
//	for (int i = M; i <= N; i++)
//		if (flag[i])
//			cout << i << '\n';
//
//	return 0;
//}